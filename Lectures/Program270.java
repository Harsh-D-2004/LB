// Factorial approach 3

package Lectures;
import java.util.*;

class Program270
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.Factorial(iNo);

        System.out.println("The factorial is : " + iRet); 

        sobj.close();
    }    
}

class Numbers
{
    public int Factorial(int iValue)
    {
        int iAns = 1;

        for(int iCnt = iValue ; iCnt >= 1 ; iCnt--)
        {
            iAns = iCnt * iAns;
        }
        return iAns;
    }
}