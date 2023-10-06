//Factorial Approach 1

package Lectures;
import java.util.*;

public class Program268
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        int iAns = 1;

        for(int iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            iAns = iCnt * iAns;
        }

        System.out.println("The factorial is : " + iAns); 

        sobj.close();
    }    
}
