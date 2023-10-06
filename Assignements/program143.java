package Assignements;
import java.util.*;

public class program143
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        int iValue2 = sobj.nextInt();

        Pattern143 pobj = new Pattern143(iValue1 , iValue2);

        pobj.Display();
    }
}

class Pattern143
{
    public int iRow;
    public int iCol;

    public Pattern143(int iValue1 , int iValue2)
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
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}
