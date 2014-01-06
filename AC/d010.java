import java.util.Scanner;
public class d010
{
	static int p[]=new int [40000];// 46340 ^ 2 = 2147483647
	static int p_count;
	public static void make_prime()
	{
		p[0]=2;p[1]=3;p[2]=5;p[3]=7;
		p_count=4;
		for( int i=11,ta=2 ; i<=46341 ; i+=ta,ta=6-ta )
		{
			boolean is_p=true;
			for(int j=0;j<p_count && is_p && p[j]*p[j]<=i;j++)
				if(i%p[j]==0)is_p=false;
			if(is_p)
			{
				p[p_count]=i;
				p_count++;
			}
		}
	}
	public static int fa(int ia,int ib)
	{
		if(ib==0)return 1;
		int ic=ia;
		for(int i=1;i<ib;i++)
			ic*=ia;
		return ic;
	}
	public static void main(String [] args)
	{
		make_prime();
		int ia,ib,ic,id,va[][]=new int [40000][2];
		Scanner cin=new Scanner(System.in);
		while(cin.hasNextInt())
		{
			ia=cin.nextInt();
			ib=0;
			ic=-1;
			id=ia;
			for(int j=0;j<p_count && p[j]*p[j]<=id;j++)
				if(id%p[j]==0)
				{
					if(j!=ic)
					{
						va[ib][0]=p[j];
						va[ib][1]=1;
						ib++;
					}
					else va[ib-1][1]++;
					id/=p[j];
					ic=j;
					j--;
				}
			if(id>1)
			{
				if(ib>0 && id==va[ib-1][0])va[ib-1][1]++;
				else
				{
					va[ib][0]=id;
					va[ib][1]=1;
					ib++;
				}
			}
			ic=1;
			for(int i=0;i<ib;i++)
				ic*=(int)((fa( va[i][0] , va[i][1]+1)-1 )/(va[i][0]-1));
			if(ic-ia<ia)System.out.println("虧數");
			else if(ic-ia>ia)System.out.println("盈數");
			else System.out.println("完全數");
		}
	}
}