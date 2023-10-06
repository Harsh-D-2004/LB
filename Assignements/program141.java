package Assignements;
import java.util.*;

public class program141
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        int iValue2 = sobj.nextInt();

        Pattern141 pobj = new Pattern141(iValue1 , iValue2);

        pobj.Display();
    }
}

class Pattern141
{
    public int iRow;
    public int iCol;

    public Pattern141(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }

    public void Display()
    {
        int i = 0 , j = 0;

        for(i = iRow  ; i >= 1 ; i--)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                System.out.print("*" + " ");
            }
            System.out.println();
        }
    }
}
