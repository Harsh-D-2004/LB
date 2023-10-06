//Accept a string and Toggle

package Lectures;
import java.util.*;

public class Program293
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX293 obj = new StringX293();

        String sret = obj.WhiteSpaceRemove(name);
        System.out.println("Converted String is : " + sret);
        
        sobj.close();
    }
}

class StringX293
{
    public String WhiteSpaceRemove(String str)
    {
        char Arr[] = str.toCharArray();
        String output = "";

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] != ' ')
            {
                output += Arr[iCnt];
            }
        }
        return output;
    }
}