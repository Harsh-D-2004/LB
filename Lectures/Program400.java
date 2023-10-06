import java.util.*;

class Program400
{
    public static void main(String arg[])
    {
        DBMS400 obj = new DBMS400();
        obj.StartDBMS();

        obj.InsertIntoTable("Rahul" , 23 , 89);
        obj.InsertIntoTable("Sagar" , 26 , 98);
        obj.InsertIntoTable("Pooja" , 20 , 56);
        obj.InsertIntoTable("Sayali" , 30 , 78);
        obj.InsertIntoTable("Tejas" , 29 , 68);

        obj.SelectFrom();
        obj.SelectFrom(2);
        obj.SelectFrom("Sayali");
    }
}

class Student400
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

    public Student400(String str , int x , int y)
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

class DBMS400
{
    public LinkedList <Student400> lobj;

    public DBMS400()
    {
        lobj = new LinkedList <Student400> ();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");
        System.out.println("Table schema created successfully...");
    }

    public void InsertIntoTable(String name , int age , int marks)
    {
        Student400 sobj = new Student400(name , age , marks);
        lobj.add(sobj);                                     
    }

    public void SelectFrom()
    {
        System.out.println("Records from the student table are : ");

        for(Student400 sref : lobj)
        {
            sref.Display();
        }
    }

    public void SelectFrom(int no)
    {
        System.out.println("Records from the stduent table are : ");

        for(Student400 sref : lobj)
        {
            if(sref.Rno == no)
            {
                sref.Display();
                break;
            }
        }
    }

    public void SelectFrom(String name)
    {
        System.out.println("Records from the stduent table are : ");

        for(Student400 sref : lobj)
        {
            if(name.equals(sref.Name))
            {
                sref.Display();
                break;
            }
        }
    }
}