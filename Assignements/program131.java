package Assignements;
import java.util.*;

public class program131 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");

        int iNo = sobj.nextInt();

        Number131 nobj = new Number131(iNo);

        int iRet = nobj.Count();

        System.out.println("The count is : " + iRet);
    }
}

class Number131
{
    public int iNo;
    public Number131(int ivalue)
    {
        iNo = ivalue;
    }

    public int Count()
    {
        int iMult = 1;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }
}
