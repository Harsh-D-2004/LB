package Assignements;
import java.util.*;

public class program142
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        int iValue2 = sobj.nextInt();

        Pattern142 pobj = new Pattern142(iValue1 , iValue2);

        pobj.Display();
    }
}

class Pattern142
{
    public int iRow;
    public int iCol;

    public Pattern142(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }

    public void Display()
    {
        int i = 0 , j = 0;

        for(i = 1  ; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
