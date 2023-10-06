//Summation of all elements of array(Approach 2)

package Lectures;
import java.util.*;

public class Program280
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        MyArray280 mobj = new MyArray280(iSize);

        mobj.Accept();
        mobj.Display();
        System.out.println("The sum of elements are : " + mobj.Sum());

        sobj.close();
    } 
}

class ArrayX280
{
    protected int Arr[];

    public ArrayX280(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the elements : ");

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    protected void Display()
    {
        int iCnt = 0;

        System.out.println("The elements are : ");

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class MyArray280 extends ArrayX280
{
    public MyArray280(int iSize)
    {
        super(iSize);
    }

    public int Sum()
    {
        int iSum = 0;

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}
