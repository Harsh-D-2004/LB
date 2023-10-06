// FActorial approach 2

package Lectures;
import java.util.*;

public class Program269
{
    public static int Factorial(int iValue)
    {
        int iAns = 1;

        for(int iCnt = iValue ; iCnt >= 1 ; iCnt--)
        {
            iAns = iCnt * iAns;
        }
        return iAns;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        int iRet = Factorial(iNo);

        System.out.println("The factorial is : " + iRet); 

        sobj.close();
    }    
}
