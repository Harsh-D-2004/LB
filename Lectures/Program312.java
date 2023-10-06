package Lectures;
import java.util.*;

class Program312
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String");
        String str1 = sobj.nextLine();
        System.out.println("Enter second String");
        String str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {
            System.out.println("Strings are not anagram");
            return;
        }

        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        int iFreq[] = new int[26];

        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            iFreq[Arr[iCnt] - 'a']++;
            iFreq[Brr[iCnt] - 'a']--;
        }
        
        for(iCnt = 0 ; iCnt < iFreq.length ; iCnt++)
        {
            if(iFreq[iCnt] != 0)
            {
                break;
            }
        }

        if(iCnt == iFreq.length)
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }

        sobj.close();
    }
}