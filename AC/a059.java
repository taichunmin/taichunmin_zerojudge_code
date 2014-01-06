import java.util.Scanner;
public class JAVA
{
	public static void main(String [] args)
	{
		Scanner cin=new Scanner(System.in);
		int ea=cin.nextInt(),ia,ib,ic;
		int va[]=new int [35];
		for(int i=0;i<35;i++)
			va[i]=i*i;
		for(int eb=0;eb<ea;eb++)
		{
			ia=cin.nextInt();
			ib=cin.nextInt();
			ic=0;
			for(int i=0;i<35;i++)
				if(ia<=va[i] && va[i]<=ib)ic+=va[i];
			System.out.println("Case "+(eb+1)+": "+ic);
		}
	}
}