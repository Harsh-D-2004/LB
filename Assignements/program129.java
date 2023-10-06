package Assignements;
import java.util.*;

public class program129 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");

        int iNo = sobj.nextInt();

        Number129 nobj = new Number129(iNo);

        int iRet = nobj.Count();

        System.out.println("The count is : " + iRet);
    }
}

class Number129
{
    public int iNo;
    public Number129(int ivalue)
    {
        iNo = ivalue;
    }

    public int Count()
    {
        int iCount = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}
