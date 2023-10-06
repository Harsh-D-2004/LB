//Display filename and filesize of directory

package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program387
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

                for(int i = 0 ; i < list.length ; i++)
                {
                    System.out.println("File name : " + list[i].getName() + " File size : " + list[i].length());
                }
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : " + iobj);
        }
    }
}

