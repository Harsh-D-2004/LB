package Lectures;
import java.util.*;

public class Program267 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First number : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the Second number : ");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        iAns = iNo1 + iNo2;

        System.out.println("The Addition is : " + iAns);
        
        sobj.close();
    }
}
