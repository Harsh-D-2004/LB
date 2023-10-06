// Multiplication of even factors

package Lectures;
import java.util.*;

class Program271
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        Numbers271 nobj = new Numbers271();

        int iRet = nobj.EvenFactors(iNo);

        System.out.println("The Multiplication is : " + iRet); 

        sobj.close();
    }    
}

class Numbers271
{
    public int EvenFactors(int iValue)
    {
        int iAns = 1;

        for(int iCnt = 2 ; iCnt <= iValue ; iCnt += 2)
        {
            if(((iValue % iCnt) == 0))
            {
                    iAns = iAns * iCnt;
            }
        }
        if(iAns == 1)
        {
            return 0;
        }
        return iAns;
    }
}