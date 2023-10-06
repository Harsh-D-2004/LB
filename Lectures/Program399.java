import java.util.*;

class Program399
{
    public static void main(String arg[])
    {
        DBMS399 obj = new DBMS399();
        obj.StartDBMS();

        obj.InsertIntoTable("Rahul" , 23 , 89);
        obj.InsertIntoTable("Sagar" , 26 , 98);
        obj.InsertIntoTable("Pooja" , 20 , 56);
        obj.InsertIntoTable("Sayali" , 30 , 78);
        obj.InsertIntoTable("Tejas" , 29 , 68);

        obj.SelectFrom();
    }
}

class Student399
{
    public int Rno;
    public String Name;
    public int Age;
    public int Marks;

    public static int Generator;

    static
    {
        Generator = 0;
    }

    public Student399(String str , int x , int y)
    {
        this.Rno = ++Generator;
        this.Name = str;
        this.Age = x;
        this.Marks = y;
    }

    public void Display()
    {
        System.out.println(this.Rno + " " + this.Name + " " + this.Age + " " + this.Marks);
    }
}

class DBMS399
{
    public LinkedList <Student399> lobj;

    public DBMS399()
    {
        lobj = new LinkedList <Student399> ();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");
        System.out.println("Table schema created successfully...");
    }

    public void InsertIntoTable(String name , int age , int marks)
    {
        Student399 sobj = new Student399(name , age , marks);
        lobj.add(sobj);                                     
    }

    public void SelectFrom()
    {
        System.out.println("Records from the stduent table are : ");

        for(Student399 sref : lobj)
        {
            sref.Display();
        }
    }
}
