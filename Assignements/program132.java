package Assignements;
import java.util.*;

public class program132 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");

        int iNo = sobj.nextInt();

        Number132 nobj = new Number132(iNo);

        int iRet = nobj.Count();

        System.out.println("The count is : " + iRet);
    }
}

class Number132
{
    public int iNo;
    public Number132(int ivalue)
    {
        iNo = ivalue;
    }

    public int Count()
    {
        int iSum1 = 0;
        int iSum2 = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iSum1 = iSum1 + iDigit;
            }
            else
            {
                iSum2 = iSum2 + iDigit;
            }
            iNo = iNo / 10;
        }
        return (iSum1 - iSum2);
    }
}
