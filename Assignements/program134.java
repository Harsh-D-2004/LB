package Assignements;
import java.util.*;

public class program134
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the number u want to search : ");
        int iNo = sobj.nextInt();

        Array134 nobj = new Array134(iSize , iNo);

        nobj.Accept();
        nobj.Display();
        int iRet = nobj.Number();

        System.out.println("The occurence is : " + iRet);

    }
}

class Array134
{
    public int Arr[];
    public int iNo;

    public Array134(int iSize , int iValue)
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

    public int Number()
    {
        int iCount = 0;

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                break;
            }
            iCount++;
        }
        return iCount;
    }

}
