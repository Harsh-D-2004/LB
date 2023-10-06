package Assignements;
import java.util.*;

public class program121
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String Str = sobj.nextLine();

        String121 mobj = new String121();

        boolean Ret = mobj.IsVowel(Str);

        if(Ret == true)
        {
            System.out.println("Vowel is present");
        }
        else
        {
            System.out.println("Vowel is not present");
        }

    }    
}

class String121
{
    public boolean IsVowel(String str)
    {
        char Arr[] = str.toCharArray();

        boolean Flag = false;

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U'))
            {
                Flag = true;
                break;
            }
        }
        return Flag;
    }
}
