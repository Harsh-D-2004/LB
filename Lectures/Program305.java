package Lectures;
import java.util.*;

class Program305
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+" , " ");

        str = str.trim();

        String Arr[] = str.split(" ");

        int iMax = 0;
        int iPos = 0;

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {   
            iMax = 0;

            if(Arr[iCnt].length() > iMax)
            {
                iMax = Arr[iCnt].length();
                iPos = iCnt;
            }
        }
        System.out.println("Largest word is : " + Arr[iPos] + " with lenght " + iMax);
        sobj.close();
    }
}