//Accept a string and display String

package Lectures;
import java.util.*;

public class Program284
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        System.out.println("Your name is : " + name);

        System.out.println("Lenght of string is : " + name.length());

        char str[] = name.toCharArray();

        for(int iCnt = 0 ; iCnt < str.length ; iCnt++)
        {
            System.out.println(str[iCnt]);
        }
        sobj.close();
    }
}
