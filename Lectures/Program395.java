package PackerUnpacker;
import java.util.*;
import java.io.*;

class Program395
{
    public static void main(String Arg[])   throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];     

        System.out.println("-----------Marvellous Packer Unpacker-----------");
        System.out.println("Unpacking Activity of packer has been started...");
        
        System.out.println("Enter the file that contains the packed data : ");
        String PackFile = sobj.nextLine();

        try
        {
            File Packobj = new File(PackFile);
    
            FileInputStream inobj = new FileInputStream(Packobj);
    
            inobj.read(Header , 0 , 100);
    
            String HeaderStr = new String(Header);
    
            System.out.println(HeaderStr);

            String Tokens[];
            Tokens = HeaderStr.split(" ");

            System.out.println("File name : " + Tokens[0]);
            System.out.println("File size : " + Tokens[1]);

            File newfileobj = new File(Tokens[0]);
            newfileobj.createNewFile();
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : " + iobj);
        }

    }
}