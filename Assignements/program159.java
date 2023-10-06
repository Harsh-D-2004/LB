package Assignements;
import java.util.*;

public class program159
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        Array159 aobj = new Array159(iSize);

        aobj.AcceptDisplay();
    }
}

class Array159
{
    public char Arr[];
    public int iSize;

    public Array159(int x)
    {
        iSize = x;
        Arr = new char[x];
    }

    public void AcceptDisplay()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr = sobj.next().toCharArray();
        }
        
        // for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        // {
        //     System.out.println(Arr[iCnt]);
        // }
        
    }

    // public void Cap()
    // {
    //     int iCnt = 0;

    //     for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
    //     {
    //         if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
    //         {
    //             Arr[iCnt] = Arr[iCnt] + 32;
    //         }
    //     }
    // }
}
