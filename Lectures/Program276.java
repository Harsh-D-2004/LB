//Armstrong number

package Lectures;
import java.util.*;

class Program276
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        Digits276 nobj = new Digits276();

        boolean bRet = nobj.CheckArmstrong(iNo);

        if(bRet == true)
        {
            System.out.println("It is armstrong number ");
        }
        else
        {
            System.out.println("It is not armstrong number ");
        }

        sobj.close();
    }    
}

class Digits276
{
    public int CountDigits(int iNo)
    {
        int iCount = 0;
        int iNotemp = iNo;

        while(iNotemp != 0)
        {
            iCount++;
            iNotemp = iNotemp / 10;
        }
        return iCount;
    }

    public int Power(int X , int Y)
    {
        int iPower = 1;

        for(int iCnt = 1 ; iCnt <= Y ; iCnt++)
        {
            iPower = iPower * X;
        }
        return iPower;
    }

    public boolean CheckArmstrong(int iNo)
    {
        int iCount = 0;
        iCount = CountDigits(iNo);
        
        int iTemp = iNo;
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            int iRet = Power(iDigit , iCount);
            iSum = iSum + iRet;
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}