package Lectures;
import java.util.*;

class Program306
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        StringBuffer sbobj = new StringBuffer(str);
        sbobj = sbobj.reverse();

        System.out.println(sbobj);

        sobj.close();
    }
}