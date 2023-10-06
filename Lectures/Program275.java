//Armstrong number

package Lectures;
import java.util.*;

class Program275
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        Digits275 nobj = new Digits275();

        boolean bRet = nobj.ArmstrongNumber(iNo);

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

class Digits275
{
    public boolean ArmstrongNumber(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;
        int iNotemp = iNo;

        while(iNotemp != 0)
        {
            iCount++;
            iNotemp = iNotemp / 10;
        }
        int iAns = 1;
        iNotemp = iNo;
        int iSum = 0;
        int iCnt = 0;
        while(iNotemp != 0)
        {
            iDigit = iNotemp % 10;
            for(iCnt = 1 ; iCnt <= iCount ; iCnt++)
            {
                iAns = iAns * iDigit;
            }
            iSum = iAns + iSum;
            iAns = 1;
            iNotemp = iNotemp / 10;
        }

        if(iNo == iSum)
        {
            return true;
        }
        return false;
    }
}