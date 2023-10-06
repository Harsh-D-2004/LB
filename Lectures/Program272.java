// Take number from user and count number of digits

package Lectures;
import java.util.*;

class Program272
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        Digits272 nobj = new Digits272();

        int iRet = nobj.CountDigits(iNo);

        System.out.println("The Multiplication is : " + iRet); 

        sobj.close();
    }    
}

class Digits272
{
    public int CountDigits(int iValue)
    {
        int iCnt = 0;

        while(iValue != 0)
        {
            iCnt++;
            iValue /= 10;

        }
        return iCnt;
    }
}