//SinglyLL

package Lectures;
import java.util.*;

class Program355
{
    public static void main(String Arg[])
    {
        DoublyLL obj = new DoublyLL();

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
        obj.DisplayRev();

        System.out.println("Number of elements are : " + obj.Count());
    }
}

class Nodex
{
    public int data;
    public Nodex next;
    public Nodex prev;

    public Nodex(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    public Nodex First;
    public int iCount;

    public DoublyLL()
    {
        this.First = null;
        this.iCount = 0;
    }

    public void Display()
    {
        System.out.println("Elements aof LL are : ");

        Nodex temp = First;

        while(temp != null)
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public void DisplayRev()
    {
        System.out.println("Elements aof LL in reverse order are : ");

        Nodex temp = First;

        while(temp.next != null)
        {
            temp = temp.next;
        }

        while(temp != null)
        {
            System.out.print(temp.data + " ");
            temp = temp.prev;
        }
        System.out.println("null");  
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int no)
    {
        Nodex newn = new Nodex(no);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First.prev = newn;
            First = newn;
        }
        iCount++;
    }

    public void InsertLast(int no)
    {
        Nodex newn = new Nodex(no);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            Nodex temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }
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
            Nodex temp = First;
            for(iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
            {
                temp = temp.next;
            }
            Nodex newn = new Nodex(no);
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;
            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(First == null)
        {
            return;
        }
        else if(First.next == null)
        {
            First = null;
        }
        else
        {
           First = First.next;
           First.prev = null;
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
        }
        else
        {
            Nodex temp = First;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
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
            Nodex temp = First;
            for(iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            temp.next.prev = temp;
            iCount--;
        }
    }
}