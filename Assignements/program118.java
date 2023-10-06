package Assignements;
import java.util.*;

public class program118
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String Str = sobj.nextLine();

        String118 mobj = new String118();

        System.out.println("The number of capital characters are : " + mobj.CountCap(Str));

    }    
}

class String118
{
    public int CountCap(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount = 0;
        int iCnt = 0;
        
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}
