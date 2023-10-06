//Filelength

package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program385
{
    public static void main(String Arg[])   throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        String Filename = sobj.nextLine();

        try
        {
            File fobj = new File(Filename);
            
            System.out.println("File name is : " + fobj.length());
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : " + iobj);
        }
    }
}

