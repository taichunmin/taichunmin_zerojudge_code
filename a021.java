import java.util.Scanner;
class BigInt
{
	public int digit[]=new int [1000]; //每個元素存一個位數
	public int length; //紀錄位數
	public boolean sign;
	public BigInt()
	{
		length=0;
		sign=false;
	}
	public BigInt(BigInt right)
	{
		length=right.length;
		sign=right.sign;
		for(int i=0;i<length;i++)digit[i]=right.digit[i];
	}
	public BigInt(String sa)
	{//123
		sign=false;
		length=sa.length(); //紀錄位數
		for(int i=0;i<sa.length();i++)
			digit[length-i-1]=sa.charAt(i)-'0'; //要倒著存，比較好做進位處理
		// 字串是用 ASCII 值下去儲存，'0' 的 ASCII 的值是 48，個可利用扣除 '0' 的方式得到其值。
	}
	public static BigInt add(BigInt left,BigInt right) // +   +=
	{
		BigInt result=new BigInt();
		result.length=Math.max(left.length,right.length); //找出兩邊的最大長度
		for(int i=0;i<result.length;i++)  //12    345    465
		{
			result.digit[i]=0;
			if(i<left.length)result.digit[i]+=left.digit[i];  //避免加到不存在的位數
			if(i<right.length)result.digit[i]+=right.digit[i];
		}
		normalize(result);//處理進位
		return result;
	}
	public static BigInt sub(BigInt left,BigInt right)
	{
		BigInt result=new BigInt();
		result.length=Math.max(left.length,right.length); //找出兩邊的最大長度
		if(!lt_or_eq(left,right))
		{
			result.sign=true;
			BigInt temp=left;
			left=right;
			right=temp;
		}
		for(int i=0;i<result.length;i++)
		{
			result.digit[i]=0;
			if(i<left.length)result.digit[i]+=left.digit[i];  //避免加到不存在的位數
			if(i<right.length)result.digit[i]-=right.digit[i];
		}
		normalize(result);//處理退位
	}
	public static BigInt mul(BigInt left,BigInt right)
	{
		BigInt result=new BigInt();
		result.length=left.length+right.length; //兩邊的總和
		for(int i=0;i<result.length;i++)
			result.digit[i]=0;
		for(int i=0;i<left.length;i++)
			for(int j=0;j<right.length;j++)
				result.digit[i+j]+=left.digit[i]*right.digit[j];
		normalize(result);//處理進位
	}
	public static BigInt div(BigInt left,BigInt right,int fia=0)
	{
		BigInt result=new BigInt(),remain=new BigInt(left);
		result.length=Math.max(left.length,right.length);
		for(int i=0;i<result.length;i++)result.digit[i]=0;
		for(int i=remain.length-right.length;i>-1;i--)
		{
			break1:while(true)
			{
				if(remain.length-i<right.length)break;
				if(reamin.length-i==right.length)
				{
					for(int j=right.length-1;j>-1;j++)
					{
						if(remain.digit[i+j]<right.digit[j])break break1;
						else if(remain.digit[i+j]>right.digit[j])break;
					}
				}
				for(int j=
	}
	public static bool lt_or_eq(BigInt left,BigInt right)
	{
		if(left.length<right.length)return true;
		if(left.length>right.length)return false;
		for(int i=left.length-1;i>-1;i--)
			if(left.digit[i]<right.digit[i])return true;
			else if(left.digit[i]>right.digit[i])return false;
		return true;
	}
	public static bool equals(BigInt left,BigInt right)
	{
		if(left.length!=right.length)return false;
		for(int i=left.length-1;i>-1;i--)
			if(left.digit[i]!=right.digit[i])return false;
		return true;
	}
	private static void normalize(BigInt result)//處理進位
	{
		for(int i=0;i<result.length;i++)
		{
			if(result.digit[i]>9)
			{
				if(i==result.length-1) 
				{
					result.digit[result.length]=0;
					result.length++;
				}
				result.digit[i+1]+=result.digit[i]/10;
				result.digit[i]%=10;
			}
			else if(result.digit[i]<0)
			{
				result.digit[i+1]+=result.digit[i]/10-1;
				result.digit[i]=(result.digit[i]%10)+10;
			}
		}
		while(result.length>0 && result.digit[result.length-1]==0)result.length--;//刪掉多餘的位數
	}