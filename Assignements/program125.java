package Assignements;

import java.util.*;

class program125
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        Array125 aobj = new Array125(iSize);

        aobj.Accept();
        aobj.Display();
        aobj.SumEvenOdd();

    }
}

class Array125
{
    public int Arr[];

    public Array125(int iSize)
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

    public void SumEvenOdd()
    {   
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0))
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}