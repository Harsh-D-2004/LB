package Lectures;
import java.util.*;

class Program302
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        if(str.length() == 0)
        {
            System.out.println("Number of words are : 0");
            return;
        }

        str = str.replaceAll("\\s+" , " ");

        str = str.trim();

        int iFreq = 0;
        for(int iCnt = 0 ; iCnt <str.length() ; iCnt++)
        {
            if(str.charAt(iCnt) == ' ')
            {
                iFreq++;
            }
        }

        System.out.println("Number of words are : " + (iFreq + 1));
        
        sobj.close();
    }
}