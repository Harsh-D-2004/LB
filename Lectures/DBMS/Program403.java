package DBMS;
import java.util.*;

class Program403
{
    public static void main(String arg[])
    {
        DBMS403 obj = new DBMS403();
        obj.StartDBMS();

        // obj.InsertIntoTable("Rahul" , 23 , 89);
        // obj.InsertIntoTable("Sagar" , 26 , 98);
        // obj.InsertIntoTable("Pooja" , 20 , 56);
        // obj.InsertIntoTable("Sayali" , 30 , 78);
        // obj.InsertIntoTable("Tejas" , 29 , 68);

        // obj.SelectFrom();
        // obj.SelectFrom(2);
        // obj.SelectFrom("Sayali");
        // System.out.println("Max marks are : " + obj.Aggregate_Max());
        // System.out.println("Min marks are : " + obj.Aggregate_Min());
        // System.out.println("Sum of marks is : " + obj.Aggregate_Sum());
        // System.out.println("Average of marks is : " + obj.Aggregate_Avg());

        // obj.DeleteFrom(4);
    }
}

class Student403
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

    public Student403(String str , int x , int y)
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

class DBMS403
{
    public LinkedList <Student403> lobj;

    public DBMS403()
    {
        lobj = new LinkedList <Student403> ();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");
        System.out.println("Table schema created successfully...");

        String Query;
        String Tokens[];

        Scanner sobj = new Scanner(System.in);
        int TokensCount = 0;

        while(true)
        {
            System.out.println("Marvellous DBMS : ");
            Query = sobj.nextLine();

            Tokens = Query.split(" ");

            TokensCount = Tokens.length;

            if(TokensCount == 1)
            {
                if("exit".equals(Tokens[0]))
                {
                    System.out.println("Thankyou for using Marvellous DBMS....");
                    break;
                }
            }
            else if(TokensCount == 2)
            {

            }
            else if(TokensCount == 3)
            {
                
            }
            else if(TokensCount == 4)
            {
                if("select".equals(Tokens[0]))
                {
                    SelectFrom();
                }   
            }
            else if(TokensCount == 5)
            {
                
            }
            else if(TokensCount == 6)
            {
                
            }
            else if(TokensCount == 7)
            {
                if("insert".equals(Tokens[0]))
                {
                    InsertIntoTable(Tokens[4] , Integer.parseInt(Tokens[5]) , Integer.parseInt(Tokens[6]));
                }
            }
        }
    }

    public void InsertIntoTable(String name , int age , int marks)
    {
        Student403 sobj = new Student403(name , age , marks);
        lobj.add(sobj);                                     
    }

    public void SelectFrom()
    {
        System.out.println("Records from the student table are : ");

        for(Student403 sref : lobj)
        {
            sref.Display();
        }
    }

    public void SelectFrom(int no)
    {
        System.out.println("Records from the stduent table are : ");

        for(Student403 sref : lobj)
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

        for(Student403 sref : lobj)
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

        for(Student403 sref : lobj)
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
        Student403 temp = lobj.get(0);
        int iMin = temp.Marks;

        for(Student403 sref : lobj)
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

        for(Student403 sref : lobj)
        {
            iSum = iSum + (sref.Marks);
        }
        return iSum;
    }

    public double Aggregate_Avg()
    {
        double iSum = 0.0;
        int iCnt = 0;

        for(Student403 sref : lobj)
        {
            iSum = iSum + (sref.Marks);
            iCnt++;
        }
        return ((iSum)/iCnt);
    }

    public void DeleteFrom(int no)
    {
        int i = 0;

        for(Student403 sref : lobj)
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