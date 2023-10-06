//Accept a string and Toggle

package Lectures;
import java.util.*;

public class Program294
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX294 obj = new StringX294();

        String sret = obj.WhiteSpaceRemove(name);
        System.out.println("Converted String is : " + sret);
        
        sobj.close();
    }
}

class StringX294
{
    public String WhiteSpaceRemove(String str)
    {
        return str.replaceAll("\\s" , "");
    }
}