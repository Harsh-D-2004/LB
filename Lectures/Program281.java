//Accept a string

package Lectures;
import java.util.*;

public class Program281
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        System.out.println("Your name is : " + name);

        sobj.close();
    }
}
