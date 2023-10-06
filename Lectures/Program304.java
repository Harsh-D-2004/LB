package Lectures;
import java.util.*;

class Program304
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+" , " ");

        str = str.trim();

        String Arr[] = str.split(" ");

        System.out.println("Enter the word : ");
        String str2 = sobj.nextLine();

        int iFreq = 0;
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {   
            if(Arr[iCnt].equals(str2))
            {
                iFreq++;
            }
        }
        System.out.println("Frquency is : " + iFreq);
        sobj.close();
    }
}