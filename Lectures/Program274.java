// Take number from user and add digits until addition is less than 10
//(Generic root)

package Lectures;
import java.util.*;

class Program274
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        Digits274 nobj = new Digits274();

        int iRet = nobj.GenericRoot(iNo);

        System.out.println("The Generic Root is : " + iRet); 

        sobj.close();
    }    
}

class Digits274
{
    public int GenericRoot(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;   
        
        while(iNo >= 10)
        {
            while(iNo != 0)
            {
                iDigit =iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
            if(iSum >= 10)
            {
                iNo = iSum;
                iSum = 0;
            }
            else
            {
                iNo = iSum;
                break;
            }
        }
        return iNo;
    }
}