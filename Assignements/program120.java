package Assignements;
import java.util.*;

public class program120
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String Str = sobj.nextLine();

        String120 mobj = new String120();

        System.out.println("The difference is : " + mobj.CountCap(Str));

    }    
}

class String120
{
    public int CountCap(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount1 = 0;
        int iCount2 = 0;
        int iCnt = 0;
        
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount1++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount2++;
            }
        }

        System.out.println(iCount1);
        System.out.println(iCount2);

        return(iCount1 - iCount2);
    }
}
