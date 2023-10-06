//Accept a string and Count Capital Characters

package Lectures;
import java.util.*;

public class Program287
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX287 obj = new StringX287();

        int iRet = obj.CountSmall(name);

        System.out.println("The number of small characters are : " + iRet);
        
        iRet = obj.CountCapital(name);
        
        System.out.println("The number of capital characters are : " + iRet);
        
        sobj.close();
    }
}

class StringX287
{
    public int CountSmall(String str)
    {
        int iCount = 0;

        for(int iCnt = 0 ; iCnt < str.length() ; iCnt++)
        {
            if((str.charAt(iCnt) >= 'a') && (str.charAt(iCnt) <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountCapital(String str)
    {
        int iCount = 0;

        for(int iCnt = 0 ; iCnt < str.length() ; iCnt++)
        {
            if((str.charAt(iCnt) >= 'A') && (str.charAt(iCnt) <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}
