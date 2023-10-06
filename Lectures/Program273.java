// Take number from user and add all digits

package Lectures;
import java.util.*;

class Program273
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        Digits273 nobj = new Digits273();

        int iRet = nobj.AddDigits(iNo);

        System.out.println("The Addition is : " + iRet); 

        sobj.close();
    }    
}

class Digits273
{
    public int AddDigits(int iValue)
    {
        if(iValue < 0)
        {
            iValue = -iValue;
        }
        
        int iAns = 0;

        while(iValue != 0)
        {
            iAns += (iValue % 10);
            iValue /= 10;
        }
        return iAns;
    }
}