import java.util.*;

class Program402
{
    public static void main(String arg[])
    {
        DBMS402 obj = new DBMS402();
        obj.StartDBMS();

        obj.InsertIntoTable("Rahul" , 23 , 89);
        obj.InsertIntoTable("Sagar" , 26 , 98);
        obj.InsertIntoTable("Pooja" , 20 , 56);
        obj.InsertIntoTable("Sayali" , 30 , 78);
        obj.InsertIntoTable("Tejas" , 29 , 68);

        obj.SelectFrom();
        obj.SelectFrom(2);
        obj.SelectFrom("Sayali");
        System.out.println("Max marks are : " + obj.Aggregate_Max());
        System.out.println("Min marks are : " + obj.Aggregate_Min());
        System.out.println("Sum of marks is : " + obj.Aggregate_Sum());
        System.out.println("Average of marks is : " + obj.Aggregate_Avg());

        obj.DeleteFrom(4);
    }
}

class Student402
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

    public Student402(String str , int x , int y)
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

class DBMS402
{
    public LinkedList <Student402> lobj;

    public DBMS402()
    {
        lobj = new LinkedList <Student402> ();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");
        System.out.println("Table schema created successfully...");
    }

    public void InsertIntoTable(String name , int age , int marks)
    {
        Student402 sobj = new Student402(name , age , marks);
        lobj.add(sobj);                                     
    }

    public void SelectFrom()
    {
        System.out.println("Records from the student table are : ");

        for(Student402 sref : lobj)
        {
            sref.Display();
        }
    }

    public void SelectFrom(int no)
    {
        System.out.println("Records from the stduent table are : ");

        for(Student402 sref : lobj)
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

        for(Student402 sref : lobj)
        {
            if(name.equals(sref.Name))
            {
                sref.Display();
                break;
            }
        }
    }

    public int Aggregate_Max()
    {
        int iMax = 0;

        for(Student402 sref : lobj)
        {
            if(sref.Marks > iMax)
            {
                iMax = sref.Marks;
            }
        }
        return iMax;
    }

    public int Aggregate_Min()
    {
        Student402 temp = lobj.get(0);
        int iMin = temp.Marks;

        for(Student402 sref : lobj)
        {
            if(sref.Marks < iMin)
            {
                iMin = sref.Marks;
            }
        }
        return iMin;
    }

    public int Aggregate_Sum()
    {
        int iSum = 0;

        for(Student402 sref : lobj)
        {
            iSum = iSum + (sref.Marks);
        }
        return iSum;
    }

    public double Aggregate_Avg()
    {
        double iSum = 0.0;
        int iCnt = 0;

        for(Student402 sref : lobj)
        {
            iSum = iSum + (sref.Marks);
            iCnt++;
        }
        return ((iSum)/iCnt);
    }

    public void DeleteFrom(int no)
    {
        int i = 0;

        for(Student402 sref : lobj)
        {
            if(sref.Rno == no)
            {
                lobj.remove(i);
                break;
            }
            i++;
        }
    }
}