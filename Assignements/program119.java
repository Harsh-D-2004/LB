package Assignements;
import java.util.*;

public class program119
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String Str = sobj.nextLine();

        String119 mobj = new String119();

        System.out.println("The number of small characters are : " + mobj.CountCap(Str));

    }    
}

class String119
{
    public int CountCap(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount = 0;
        int iCnt = 0;
        
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}
