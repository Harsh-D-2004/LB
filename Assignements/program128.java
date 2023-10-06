package Assignements;
import java.util.*;

public class program128 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");

        int iNo = sobj.nextInt();

        Number128 nobj = new Number128(iNo);

        int iRet = nobj.Count();

        System.out.println("The count is : " + iRet);
    }
}

class Number128
{
    public int iNo;
    public Number128(int ivalue)
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
            if(iDigit % 2 == 0)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}
