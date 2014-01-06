import java.util.Scanner;
public class JAVA
{
	public static void main(String [] args)
	{
		Scanner cin=new Scanner(System.in),sin;
		long va[][]=new long[50001][10];
		int vb[]={1,5,10,20,50,100,200,500,1000,2000};
		for(int i=0;i<10;i++)va[0][i]=1;
		for(int i=1;i<=50000;i++)
			for(int j=0;j<10;j++)
			{
				int ta=j-1,tb=i-vb[j];
				va[i][j]=0;
				if(ta>=0)va[i][j]+=va[i][ta];
				if(tb>=0)va[i][j]+=va[tb][j];
			}
		String sa;
		while(cin.hasNextLine())
		{
			sa=cin.nextLine();
			sin=new Scanner(sa);//.useDelimiter(" \n")
			int ia=0;
			while(sin.hasNextInt()) ia+=sin.nextInt();
			if(ia==0)continue;
			System.out.println((va[ia][9]-1));
		}
	}
}