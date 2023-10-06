package Assignements;
import java.util.*;

public class program148
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        int iValue2 = sobj.nextInt();

        Pattern148 pobj = new Pattern148(iValue1 , iValue2);

        pobj.Display();
    }
}

class Pattern148
{
    public int iRow;
    public int iCol;

    public Pattern148(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }

    public void Display()
    {
        String str = new String();
        str = "Hello";
        char Arr[] = str.toCharArray();
        
        int i = 0 , j = 0 , iCnt = 0;

        for(i = 1  ; i <= iRow ; i++)
        {
            iCnt = 0;

            for(j = 1 ; j <= iCol ; j++)
            {
                if(i < j)
                {
                    System.out.print(Arr[iCnt] + " ");
                    iCnt++;
                }
            }
            System.out.println();
        }
    }
}
