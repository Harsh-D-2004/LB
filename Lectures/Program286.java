//Accept a string and Count Capital Characters

package Lectures;
import java.util.*;

public class Program286
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX286 obj = new StringX286();

        int iRet = obj.CountSmall(name);

        System.out.println("The number of small characters are : " + iRet);
        
        iRet = obj.CountCapital(name);
        
        System.out.println("The number of capital characters are : " + iRet);
        
        sobj.close();
    }
}

class StringX286
{
    public int CountSmall(String str)
    {
        char str1 [] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0 ; iCnt < str1.length ; iCnt++)
        {
            if((str1[iCnt] >= 'a') && (str1[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountCapital(String str)
    {
        char str1 [] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0 ; iCnt < str1.length ; iCnt++)
        {
            if((str1[iCnt] >= 'A') && (str1[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}
