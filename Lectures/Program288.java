//Accept a string and convert it to lowercase

package Lectures;
import java.util.*;

public class Program288
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX288 obj = new StringX288();

        String sret = obj.strLower(name);

        System.out.println("Converted string is : " + sret);
        
        sobj.close();
    }
}

class StringX288
{
    public String strLower(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32); 
            }
        }
        String ret = new String(Arr);

        return ret;
    }
}
