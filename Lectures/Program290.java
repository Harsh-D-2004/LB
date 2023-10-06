//Accept a string and Toggle

package Lectures;
import java.util.*;

public class Program290
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        StringX290 obj = new StringX290();

        String sret = obj.strToggle(name);

        System.out.println("Converted string is : " + sret);
        
        sobj.close();
    }
}

class StringX290
{
    public String strLower(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32); 
            }
        }

        return new String(Arr);
    }

    public String strUpper(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32); 
            }
        }

        return new String(Arr);
    }

    public String strToggle(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32); 
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32); 
            }
        }

        return new String(Arr);
    }
    
}