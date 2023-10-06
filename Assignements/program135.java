package Assignements;
import java.util.*;

public class program135
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the starting point : ");
        int iStart = sobj.nextInt();

        System.out.println("Enter the ending point : ");
        int iEnd = sobj.nextInt();

        Array135 nobj = new Array135(iSize , iStart , iEnd);

        nobj.Accept();
        nobj.Display();

        System.out.println("The range elements are : ");
        
        nobj.Number();

    }
}

class Array135
{
    public int Arr[];
    public int iStart;
    public int iEnd;

    public Array135(int iSize , int iValue1 , int iValue2)
    {
        Arr = new int[iSize];
        iStart = iValue1;
        iEnd = iValue2;
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

        System.out.println("The elements are : ");
        
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public void Number()
    {
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }

}
