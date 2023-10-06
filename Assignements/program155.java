package Assignements;
import java.util.*;

public class program155
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of first array : ");
        int iSize1 = sobj.nextInt();

        System.out.println("Enter size of second array : ");
        int iSize2 = sobj.nextInt();

        Array155 aobj = new Array155(iSize1 , iSize2);

        aobj.Accept();
        aobj.Display();
        aobj.OddEven();
    }    
}

class Array155
{
    public int iSize1;
    public int iSize2;
    public int Arr[];
    public int Brr[];

    public Array155(int x , int y)
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

    public void OddEven()
    {
        int iCnt1 , iCnt2 = 0;

        System.out.println("Even elements are: ");
        
        for(iCnt1 = 0 ; iCnt1 < Arr.length ; iCnt1++)
        {
            if(Arr[iCnt1] % 2 == 0)
            {
                System.out.print(Arr[iCnt1] + " ");
            }
        }

        System.out.println();

        System.out.println("Even elements are: ");

        for(iCnt2 = 0 ; iCnt2 < Brr.length ; iCnt2++)
        {
            if(Brr[iCnt2] % 2 == 0)
            {
                System.out.print(Brr[iCnt2] + " ");
            }
        }

        System.out.println();
    }
}
