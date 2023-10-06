//Check wether the file exists or not

package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program383
{
    public static void main(String Arg[])   throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        String Filename = sobj.nextLine();

        try
        {
            File fobj = new File(Filename);
    
            boolean bRet = fobj.exists();
            
            if(bRet == true)
            {
                System.out.println("File is present");
            }
            else
            {
                System.out.println("File is not present");
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : " + iobj);
        }
    }
}

