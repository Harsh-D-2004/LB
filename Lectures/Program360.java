//SinglyCl

package Lectures;
import java.util.*;

class Program360
{
    public static void main(String Arg[])
    {
        SinglyCl obj = new SinglyCl();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(210);
        obj.InsertLast(101);
        obj.InsertLast(121);
        obj.Display();

        System.out.println("Number of elements are : " + obj.Count());

        obj.DeleteFirst();
        obj.DeleteLast();

        obj.Display();

        System.out.println("Number of elements are : " + obj.Count());

        obj.InsertAtPos(31, 4);
        obj.DeleteAtPos(2);

        obj.Display();

        System.out.println("Number of elements are : " + obj.Count());
    }
}

class Nodex2
{
    public int data;
    public Nodex2 next;

    public Nodex2(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyCl
{
    public Nodex2 First;
    public Nodex2 Last;
    public int iCount;

    public SinglyCl()
    {
        this.First = null;
        this.Last = null;
        this.iCount = 0;
    }

    public void Display()
    {
        System.out.println("Elements aof LL are : ");

        Nodex2 temp = First;

        do
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }while(temp.next != First);
        
        System.out.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int no)
    {
        Nodex2 newn = new Nodex2(no);

        if(First == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        Last.next = First;
        iCount++;
    }

    public void InsertLast(int no)
    {
        Nodex2 newn = new Nodex2(no);

        if(First == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            Last.next = newn;
            Last = newn;
        }
        Last.next = First;
        iCount++;
    }

    public void InsertAtPos(int no , int iPos)
    {
        int iSize = Count();

        if((iPos < 1) || (iPos > iSize + 1))
        {
            return;
        }
        else if(iPos == 1)
        {
            InsertFirst(no);
        }
        else if(iPos == iSize + 1)
        {
            InsertLast(no);
        }
        else
        {
            int iCnt = 0;
            Nodex2 temp = First;
            for(iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
            {
                temp = temp.next;
            }
            Nodex2 newn = new Nodex2(no);
            newn.next = temp.next;
            temp.next = newn;
            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(iCount == 0)
        {
            return;
        }
        else if(iCount == 1)
        {
            First = null;
            Last = null;
        }
        else
        {
            First = First.next;
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(First == null)
        {
            return;
        }
        else if(First.next == null)
        {
            First = null;
            Last = null;
        }
        else
        {
            Nodex2 temp = First;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            Last = temp;
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        int iSize = Count();

        if((iPos < 1) || (iPos > iSize))
        {
            return;
        }
        else if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iSize)
        {
            DeleteLast();
        }
        else
        {
            int iCnt = 0;
            Nodex2 temp = First;
            for(iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            iCount--;
        }
    }
}