//display array(Approach 2)

package Lectures;
import java.util.*;

public class Program278
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        ArrayX278 aobj = new ArrayX278(iSize);

        aobj.Accept();
        aobj.Display();

        sobj.close();
    } 
}

class ArrayX278
{
    public int Arr[];

    public ArrayX278(int iSize)
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
}
