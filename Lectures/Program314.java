package Lectures;
import java.util.*;

public class Program314 
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0 , iCol = 0;

        System.out.println("Enter number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of cols");
        iCol = sobj.nextInt();

        Matrix314 mobj = new Matrix314(iRow , iCol);

        mobj.Accept();
        mobj.Display();
    }    
}

class Matrix314
{
    public int Arr[][];

    public Matrix314(int i , int j)
    {
        Arr = new int[i][j];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements : ");
        for(int i = 0 ; i<Arr.length ; i++)
        {
            for(int j = 0 ; j<Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of matrix are : ");

        for(int i = 0 ; i<Arr.length ; i++)
        {
            for(int j = 0 ; j<Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
