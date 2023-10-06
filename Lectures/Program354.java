//SinglyLL

package Lectures;
import java.util.*;

class Program354
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

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

class Node
{
    public int data;
    public Node next;

    public Node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    public Node First;
    public int iCount;

    public SinglyLL()
    {
        this.First = null;
        this.iCount = 0;
    }

    public void Display()
    {
        System.out.println("Elements aof LL are : ");

        Node temp = First;

        while(temp != null)
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int no)
    {
        Node newn = new Node(no);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;
    }

    public void InsertLast(int no)
    {
        Node newn = new Node(no);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            Node temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
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
            Node temp = First;
            for(iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
            {
                temp = temp.next;
            }
            Node newn = new Node(no);
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
        First = First.next;
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
            Node temp = First;

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
            Node temp = First;
            for(iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            iCount--;
        }
    }
}