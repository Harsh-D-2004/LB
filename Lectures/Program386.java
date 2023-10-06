//isdirectory and display length of directory

package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program386
{
    public static void main(String Arg[])   throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the folder name : ");
        String Foldername = sobj.nextLine();

        try
        {
            File fobj = new File(Foldername);
            boolean bRet = fobj.isDirectory();

            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                
                System.out.println("Number of files in that directory are : " + list.length);
            }
            else
            {
                System.out.println("Its not a directory");
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : " + iobj);
        }
    }
}

