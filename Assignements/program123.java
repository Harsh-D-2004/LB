package Assignements;

import java.util.*;

class program123
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        Array123 aobj = new Array123(iSize);

        aobj.Accept();
        aobj.Display();
        int iRet = aobj.SumEvenOdd();

        System.out.println("The summation is : " + iRet);

    }
}

class Array123
{
    public int Arr[];

    public Array123(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    
    public void Display()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Elements are : ");

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
           System.out.println(Arr[iCnt]);
        }
    }

    public int SumEvenOdd()
    {
        int iSum1 = 0;
        int iSum2 = 0;
        
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iSum1 = iSum1 + Arr[iCnt];
            }
            else
            {
                iSum2 = iSum2 + Arr[iCnt];
            }
        }

        return(iSum1 + iSum2);
    }
}