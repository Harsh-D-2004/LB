package Assignements;
import java.util.*;

public class program145
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        int iValue2 = sobj.nextInt();

        Pattern145 pobj = new Pattern145(iValue1 , iValue2);

        pobj.Display();
    }
}

class Pattern145
{
    public int iRow;
    public int iCol;

    public Pattern145(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }

    public void Display()
    {
        int i = 0 , j = 0;

        for(i = 1  ; i <= iRow ; i++)
        {
            for(j = iCol ; j >= 1 ; j--)
            {
                    System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}