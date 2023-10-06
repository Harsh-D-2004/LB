package Assignements;

import java.util.*;

class program126
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        Array126 aobj = new Array126(iSize);

        aobj.Accept();
        aobj.Display();
        int iRet = aobj.SumEvenOdd();

        System.out.println("The no of elements are : " + iRet);

    }
}

class Array126
{
    public int Arr[];

    public Array126(int iSize)
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
        int iCount = 0;
        
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 == 0))
            {
                iCount++;
            }
        }

        return iCount;
    }
}