package Assignements;
import java.util.*;

public class program133
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the number u want to search : ");
        int iNo = sobj.nextInt();

        Array133 nobj = new Array133(iSize , iNo);

        nobj.Accept();
        nobj.Display();
        boolean bRet = nobj.Number();
        
        if(bRet == true)
        {
            System.out.println("Number is present");
        }
        else
        {
            System.out.println("Number is not present");
        }

    }
}

class Array133
{
    public int Arr[];
    public int iNo;

    public Array133(int iSize , int iValue)
    {
        Arr = new int[iSize];
        iNo = iValue;
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

    public boolean Number()
    {
        boolean bFlag = false;

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }

}
