package Lectures;
import java.util.*;

class Program303
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+" , " ");

        str = str.trim();

        String Arr[] = str.split(" ");

        int iFreq = 0;
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {   
            if(Arr[iCnt].equals("india"))
            {
                iFreq++;
            }
        }

        System.out.println("Frquency is : " + iFreq);
        
        sobj.close();
    }
}