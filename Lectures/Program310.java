package Lectures;
import java.util.*;

class Program310
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

        int iFreq1[] = new int[26];
        int iFreq2[] = new int[26];

        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            iFreq1[Arr[iCnt] - 'a']++;
        }

        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            iFreq2[Brr[iCnt] - 'a']++;
        }
        
        for(iCnt = 0 ; iCnt < iFreq1.length ; iCnt++)
        {
            if(Arr[iCnt] != Brr[iCnt])
            {
                break;
            }
        }

        if(iCnt == iFreq1.length)
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