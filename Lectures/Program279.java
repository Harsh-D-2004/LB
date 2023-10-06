//Summation of all elements of array(Approach 1)

package Lectures;
import java.util.*;

public class Program279
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        ArrayX279 aobj = new ArrayX279(iSize);

        aobj.Accept();
        aobj.Display();
        System.out.println("The sum of elements are : " + aobj.Sum());

        sobj.close();
    } 
}

class ArrayX279
{
    public int Arr[];

    public ArrayX279(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
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

    public void Display()
    {
        int iCnt = 0;

        System.out.println("The elements are : ");

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
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
