package Assignements;
import java.util.*;

public class program137
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        int iValue2 = sobj.nextInt();

        Pattern137 pobj = new Pattern137(iValue1 , iValue2);

        pobj.Display();
    }
}

class Pattern137
{
    public int iRow;
    public int iCol;

    public Pattern137(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }

    public void Display()
    {
        int i = 0 , j = 0;
        char ch1 = 'A';
        char ch2 = 'a';

        for(i = 1  ; i <= iRow ; i++)
        {
            ch1 = 'A';   
            ch2 = 'a';   
            for(j = 1 ; j <= iCol ; j++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(ch2 + " ");
                    ch2++;
                }
                else
                {
                    System.out.print(ch1 + " ");
                    ch1++;
                }
            }
            System.out.println();
        }
    }
}
