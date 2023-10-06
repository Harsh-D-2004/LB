package Assignements;
import java.util.*;

public class program122
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String Str = sobj.nextLine();

        String122 mobj = new String122();

        System.out.println("Revrsed string is : " + mobj.Reverse(Str));
    }    
}

class String122
{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = (Arr.length - 1);
        char cTemp = '\0';

        while(iStart <= iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }
        
        String str2 = new String(Arr);

        return str2;
    }
}
