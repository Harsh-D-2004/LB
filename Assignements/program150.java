package Assignements;

import java.util.*;

class program150
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        System.out.println("Enter Rows: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Cols : ");
        int iCol = sobj.nextInt();

        String150 obj = new String150(iRow , iCol , str);
        obj.Display();

    }
}

class String150
{
    public int iRow;
    public int iCol;
    public String str;

    public String150(int x , int y , String cmp)
    {
        iRow = x;
        iCol = y;
        str = cmp;
    }

    public void Display()
    {
        char Arr[] = str.toCharArray();
        int i = 0 , j = 0 , iCnt = 0;

        for(i = iCol ; i >= 1 ; i--)
        {
            iCnt = 0;
            for(j = 1 ; j<= iRow ; j++)
            {
                if((i > j) || (i == j))
                {
                    System.out.print(Arr[iCnt] + " ");
                    iCnt++;
                }
                else
                {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}
