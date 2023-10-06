package Assignements;
import java.util.*;

public class program130 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");

        int iNo = sobj.nextInt();

        Number130 nobj = new Number130(iNo);

        int iRet = nobj.Count();

        System.out.println("The count is : " + iRet);
    }
}

class Number130
{
    public int iNo;
    public Number130(int ivalue)
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
            if((iDigit >= 3) && (iDigit <= 7))
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}
