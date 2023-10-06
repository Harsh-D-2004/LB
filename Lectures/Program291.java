//Accept a string and Toggle

package Lectures;
import java.util.*;

public class Program291
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX291 obj = new StringX291();

        String sret = obj.WhiteSpaceRemove(name);
        System.out.println("Converted String is : " + sret);
        
        sobj.close();
    }
}

class StringX291
{
    public String WhiteSpaceRemove(String str)
    {
        char Arr[] = str.toCharArray();

        char Brr[] = new char[Arr.length];

        int i = 0;

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] != ' ')
            {
                Brr[i] = Arr[iCnt];
                i++;
            }
        }
        return new String(Brr);
    }
}