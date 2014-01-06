import java.util.Scanner;
public class d929
{
    public static void main(String [] args)
    {
        Scanner cin=new Scanner(System.in);
        int ta;
        ta=cin.nextInt();
        String sa;
        sa=cin.nextLine();
        for(int i=0;i<ta;i++)
        {
            sa=cin.nextLine();
            boolean ba=true;
            for(int j=0;j<sa.length()/2 && ba;j++)
                if(sa.charAt(j)!=sa.charAt(sa.length()-j-1))ba=false;
            if(ba)System.out.println("yes");
            else System.out.println("no");
        }
    }
}