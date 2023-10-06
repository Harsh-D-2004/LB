//Accept a string and Toggle

package Lectures;
import java.util.*;

public class Program295
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX295 obj = new StringX295();

        String sret = obj.Reverse(name);
        System.out.println("Converted String is : " + sret);
        
        sobj.close();
    }
}

class StringX295
{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length - 1;

        char cTemp = ' ';
        while(iStart < iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }
        return new String(Arr);
    }
}