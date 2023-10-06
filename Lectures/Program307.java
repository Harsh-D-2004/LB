package Lectures;
import java.util.*;

class Program306
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s", " ");
        str = str.trim();

        String Arr[] = str.split(" ");
        
        StringBuffer output = new StringBuffer();

        for(String s : Arr)
        {
            StringBuffer word = new StringBuffer(s);
            output.append(word.reverse().append(" "));
        }

        String Result = new String(output);
        Result = Result.trim();

        System.out.println("Result is : " + Result);

        sobj.close();
    }
}