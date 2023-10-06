package Assignements;
import java.util.*;

public class program136
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        int iValue2 = sobj.nextInt();

        Pattern136 pobj = new Pattern136(iValue1 , iValue2);

        pobj.Display();
    }
}

class Pattern136
{
    public int iRow;
    public int iCol;

    public Pattern136(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }

    public void Display()
    {
        int i = 0 , j = 0;
        char ch = 'A';

        for(i = 1  ; i <= iRow ; i++)
        {
            ch = 'A';   
            for(j = 1 ; j <= iCol ; j++)
            {
                System.out.print(ch + " ");
                ch++;
            }
            System.out.println();
        }
    }
}
