import java.util.Scanner;
public class JAVA
{
	public static int fa(int ia)
	{
		return (ia>0) ? ia : 0 ;
	}
	public static void main(String [] args)
	{
		int ia,ib;
		Scanner cin=new Scanner(System.in);
		while(cin.hasNextInt())
		{
			ia=cin.nextInt();
			if(ia>40)System.out.println(100);
			else System.out.println(ia*6-fa(ia-10)*4-fa(ia-20));
		}
	}
}