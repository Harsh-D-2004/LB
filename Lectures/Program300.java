package Lectures;
import java.util.*;

class Program300
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+" , " ");

        str = str.trim();

        System.out.println("Update String is : " + str);

        sobj.close();
    }
}