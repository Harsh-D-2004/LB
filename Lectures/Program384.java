//getname

package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program384
{
    public static void main(String Arg[])   throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        String Filename = sobj.nextLine();

        try
        {
            File fobj = new File(Filename);
    
            String name = fobj.getName();
            
            System.out.println("File name is : " + name);
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : " + iobj);
        }
    }
}

