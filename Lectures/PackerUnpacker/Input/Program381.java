//Accept filename from user and create new file 

package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program381
{
    public static void main(String Arg[])   throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name that u want to create : ");
        String Filename = sobj.nextLine();

        File fobj = new File(Filename);

        boolean bRet = fobj.createNewFile();

        if(bRet == true)
        {
            System.out.println("File is successfully created");
        }
        else
        {
            System.out.println("Unable tot create file");
        }
    }
}

