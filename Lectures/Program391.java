//Write Header into Combined File

package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program391
{
    public static void main(String Arg[])   throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the folder name : ");
        String Foldername = sobj.nextLine();
        
        File fobj = new File(Foldername);
        String Header = null;

        System.out.println("Enter the name of packed file : ");
        String PackFile = sobj.nextLine();

        try
        {
            File Packobj = new File(PackFile);
            boolean bRet = Packobj.createNewFile();

            if(bRet == false)
            {
                System.out.println("Unable to create the file");
            }

            FileOutputStream outobj = new FileOutputStream(PackFile);
        
            bRet = fobj.isDirectory();
            
            if(bRet == true)
            {
                File list[] = fobj.listFiles();

                for(int i = 0 ; i < list.length ; i++)
                {
                    if((list[i].getName()).endsWith(".txt"))
                    {
                        Header = list[i].getName() + " " + list[i].length();
                        for(int j = Header.length() ; j < 100 ; j++)
                        {
                            Header = Header + " ";
                        }
                        
                        byte bHeader[] = Header.getBytes();

                        outobj.write(bHeader , 0 , bHeader.length);
                    }
                }
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : " + iobj);
        }
    }
}