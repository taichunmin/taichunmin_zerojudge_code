import java.util.Scanner;
public class JAVA
{
	public static void main(String [] args)
	{
		Scanner cin=new Scanner(System.in);
		int ia,ib,va[]={0,0,0};
		ia=cin.nextInt();
		for(int i=0;i<ia;i++)
		{
			ib=cin.nextInt();
			va[ib%3]++;
		}
		System.out.printf("%d %d %d\n",va[0],va[1],va[2]);
	}
}