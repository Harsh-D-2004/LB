import java.util.*;

class Program398
{
    public static void main(String arg[])
    {
        DBMS398 obj = new DBMS398();
        obj.StartDBMS();

        obj.InsertIntoTable("Rahul" , 23 , 89);
        obj.InsertIntoTable("Sagar" , 26 , 98);
        obj.InsertIntoTable("Pooja" , 20 , 56);
        obj.InsertIntoTable("Sayali" , 30 , 78);
        obj.InsertIntoTable("Tejas" , 29 , 68);
    }
}

class Student398
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

    public Student398(String str , int x , int y)
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

class DBMS398
{
    public LinkedList <Student398> lobj;

    public DBMS398()
    {
        lobj = new LinkedList <Student398> ();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");
        System.out.println("Table schema created successfully...");
    }

    public void InsertIntoTable(String name , int age , int marks)
    {
        Student398 sobj = new Student398(name , age , marks);
        lobj.add(sobj);                                     
    }
}
