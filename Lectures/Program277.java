//display array(Approach 1)

package Lectures;
import java.util.*;

public class Program277
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");

        int iCnt = 0;
        
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("The elements are : ");

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        sobj.close();
    } 
}
