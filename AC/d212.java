import java.util.Scanner;
public class JAVA
{
	public static void fa(long va[])
	{
		int ia=0;
		for(int i=0;i<10;i++)
		{
			if(ia==0 && va[i]!=0)
			{
				ia=1;
				System.out.print(va[i]);
			}
			else if(ia==1) System.out.printf("%09d",va[i]);
		}
		if(ia==0)System.out.println("0");
		else System.out.println("");
	}
	public static void main(String [] args)
	{
		long va[][]=new long [101][10];
		for(int i=0;i<101;i++)
			for(int j=0;j<10;j++)
				va[i][j]=0;
		va[0][9]=1;va[1][9]=1;
		for(int i=2;i<=100;i++)
		{
			for(int j=0;j<10;j++)
				va[i][j]=va[i-1][j]+va[i-2][j];
			for(int j=9;j>0;j--)
			{
				va[i][j-1]+=va[i][j]/1000000000;
				va[i][j]%=1000000000;
			}
		}
		Scanner cin=new Scanner(System.in);
		int ia;
		while(cin.hasNextInt())
		{
			ia=cin.nextInt();
			fa(va[ia]);
		}
	}
}