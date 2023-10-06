//Make Header file

package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program388
{
    public static void main(String Arg[])   throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the folder name : ");
        String Foldername = sobj.nextLine();

        try
        {
            File fobj = new File(Foldername);
            String Header = null;
            boolean bRet = fobj.isDirectory();
            
            if(bRet == true)
            {
                File list[] = fobj.listFiles();

                for(int i = 0 ; i < list.length ; i++)
                {
                    Header = list[i].getName() + " " + list[i].length();
                    System.out.println(Header);
                }
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : " + iobj);
        }
    }
}

