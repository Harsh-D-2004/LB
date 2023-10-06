package Assignements;
import java.util.*;

public class program157
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of first array : ");
        int iSize1 = sobj.nextInt();

        System.out.println("Enter size of second array : ");
        int iSize2 = sobj.nextInt();

        Array157 aobj = new Array157(iSize1 , iSize2);

        aobj.Accept();
        aobj.Display();
        aobj.Addition();
    }    
}

class Array157
{
    public int iSize1;
    public int iSize2;
    public int Arr[];
    public int Brr[];

    public Array157(int x , int y)
    {
        iSize1 = x;
        iSize2  = y;
        Arr = new int[iSize1];
        Brr = new int[iSize2];
    }

    public void Accept()
    {
        int iCnt1 , iCnt2 = 0;
        Scanner ssobj = new Scanner(System.in);

        System.out.println("Enter elements for first array : ");

        for(iCnt1 = 0 ; iCnt1 < Arr.length ; iCnt1++)
        {
            Arr[iCnt1] = ssobj.nextInt();
        }

        System.out.println("Enter elements for second array : ");
        
        for(iCnt2 = 0 ; iCnt2 < Brr.length ; iCnt2++)
        {
            Brr[iCnt2] = ssobj.nextInt();        
        }
    }

    public void Display()
    {
        int iCnt1 , iCnt2 = 0;

        System.out.println("Elements of first array are : ");
        
        for(iCnt1 = 0 ; iCnt1 < Arr.length ; iCnt1++)
        {
            System.out.print(Arr[iCnt1] + " ");
        }

        System.out.println();

        System.out.println("Elements of second array are : ");

        for(iCnt2 = 0 ; iCnt2 < Brr.length ; iCnt2++)
        {
            System.out.print(Brr[iCnt2] + " ");
        }

        System.out.println();
    }

    public void Addition()
    {
        int iCnt1 , iCnt2  = 0;
        int iSum1 = 0;
        int iSum2 = 0;
        
        for(iCnt1 = 0 ; iCnt1 < Arr.length ; iCnt1++)
        {
            iSum1 = iSum1 + Arr[iCnt1];
        }

        System.out.println();

        for(iCnt2 = 0 ; iCnt2 < Brr.length ; iCnt2++)
        {
            iSum2 = iSum2 + Arr[iCnt2];
        }

        System.out.println("Addition of  First is " + iSum1 + "Addition of second is" + iSum2);
    }
}
