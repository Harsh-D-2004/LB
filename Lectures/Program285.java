//Accept a string and Count Small characters

package Lectures;
import java.util.*;

public class Program285
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX285 obj = new StringX285();

        int iRet = obj.CountSmall(name);

        System.out.println("The number of small characters are : " + iRet); 

        
        sobj.close();
    }
}

class StringX285
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
}
