//Accept a string and convert it to Uppercase

package Lectures;
import java.util.*;

public class Program289
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX289 obj = new StringX289();

        String sret = obj.strLower(name);

        System.out.println("Converted string is : " + sret);
        
        sobj.close();
    }
}

class StringX289
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

    public String strUpper(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32); 
            }
        }
        String ret = new String(Arr);

        return ret;
    }
}
