import java.util.Scanner;
public class d984
{
	public static void main(String [] args)
	{
		Scanner cin=new Scanner(System.in);
		long va[]=new long[3];
		while(cin.hasNextInt())
		{
			for(int i=0;i<3;i++)
				va[i]=cin.nextInt();
			char ca[]={'A','B','C'};
			for(int i=0;i<3;i++)
				for(int j=i+1;j<3;j++)
					if(va[i]<va[j])
					{
						long temp=va[i];
						va[i]=va[j];
						va[j]=temp;
						char temp2=ca[i];
						ca[i]=ca[j];
						ca[j]=temp2;
					}
			if(va[1]+va[2]>va[0])System.out.println(ca[1]);
			else System.out.println(ca[0]);
		}
	}
}