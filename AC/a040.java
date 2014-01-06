import java.util.Scanner;
public class JAVA
{
	static int vb[][]= {{0,1, 2,  3,   4,    5,    6,     7,     8,     9},// ^1
						{0,1, 4,  9,  16,   25,   36,    49,    64,    81},// ^2
						{0,1, 8, 27,  64,  125,  216,   343,   512,   729},// ^3
						{0,1,16, 81, 256,  625, 1296,  2401,  4096,  6561},// ^4
						{0,1,32,243,1024, 3125, 7776, 16807, 32768, 59049},// ^5
						{0,1,64,729,4096,15625,46656,117649,262144,531441}};//^6
	public static void main(String [] args)
	{
		boolean va[]=new boolean[1000000];
		for(int i=0;i<1000000;i++)
		{
			int ia=i,ib=0,ic=i,id=0;
			while(ia>0)
			{
				ia/=10;
				ib++;
			}
			while(ic>0)
			{
				id+=vb[ib-1][ic%10];
				ic/=10;
			}
			va[i]=(id==i);
		}
		int ia,ib;
		Scanner cin=new Scanner(System.in);
		while(cin.hasNextInt())
		{
			ia=cin.nextInt();
			ib=cin.nextInt();
			boolean first=true;
			for(int i=ia;i<=ib;i++)
				if(va[i])
				{
					if(!first)System.out.print(" ");
					System.out.print(i);
					first=false;
				}
			if(first)System.out.println("none");
			else System.out.println("");
		}
	}
}