#include <iostream>
#include <conio.h>
using namespace std;

#define TRUE 1;
#define FALSE 0;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

class DLL
{
private:
    Node *head;

public:
    DLL();
    void create();
    void Search(int key);
    void display();
    void length();
    void insert_at_first();
    void insert_at_last();
    void insert_after();
    void dele();
    void join(DLL  , DLL);
    ~DLL();
};

DLL ::DLL()
{
    head = NULL;
}

void DLL ::create()
{
    Node *temp, *n1, *last;
    int dat;
    int flag = 0;
    char ans = 'y';

    do
    {
        cout << "Enter the data : \n";
        cin >> dat;

        n1 = new Node;

        if (n1 == NULL)
        {
            cout << "Unable to allocate the memeory \n";
        }
        n1->prev = NULL;
        n1->data = dat;
        n1->next = NULL;

        if (flag == 0)
        {
            temp = n1;
            last = temp;
            flag = 1;
        }
        else
        {
            last->next = n1;
            n1->prev = last;
            last = n1;
        }

        cout << "Do you wanty to continue ? \n";
        ans = getche();
        cout << "\n";

    } while (ans == 'y' || ans == 'Y');
    cout << "The linked list is created \n";
    getche();
    head = temp;
}

void DLL ::display()
{
    Node *temp;
    temp = head;

    if (temp == NULL)
    {
        cout << "The list is empty \n";
    }
    else
    {
        cout << "The elements of linked list are : \n";

        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
    }
    cout << "\n";
    getch();
}

void DLL ::length()
{
    Node *temp;
    temp = head;
    int iCnt = 0;

    if (temp == NULL)
    {
        cout << "The list is empty \n";
    }
    else
    {
        cout << "The elements of linked list are : \n";

        while (temp != NULL)
        {
            iCnt++;
            temp = temp->next;
        }

        cout << "The length of linked list is : " << iCnt << "\n";
    }
    cout << "\n";
    getch();
}

void DLL ::Search(int key)
{
    Node *temp;
    temp = head;

    bool flag = false;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            flag = true;
            break;
        }

        temp = temp->next;
    }

    if (flag == true)
    {
        cout << "The element is present \n";
    }
    else
    {
        cout << "The element is not present \n";
    }

    getche();
}

void DLL ::insert_at_first()
{
    Node *temp, *n1;
    temp = head;
    int dat;

    cout << "Enter the data : \n";
    cin >> dat;

    n1 = new Node;
    n1->data = dat;
    n1->prev = NULL;
    n1->next = NULL;

    if (head)
    {
        head->prev = n1;
        n1->next = head;
    }
    head = n1;

    cout << "Node inserted \n";

    getche();
}

void DLL ::insert_after()
{
    Node *temp, *n1;
    int dat, pos;

    cout << "Enter the data : \n";
    cin >> dat;

    cout << "Enter the pos : \n";
    cin >> pos;

    n1 = new Node;
    n1->data = dat;
    n1->prev = NULL;
    n1->next = NULL;

    temp = head;

    if (head != NULL)
    {
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        n1->next = temp->next;
        temp->next->prev = n1;
        temp->next = n1;
        n1->prev = temp;
    }
    else
    {
        cout << "Node not inserted \n";
    }
}

void DLL ::insert_at_last()
{
    Node *temp, *n1;
    int dat;

    cout << "Enter the data : \n";
    cin >> dat;

    n1 = new Node;
    ;
    n1->data = dat;
    n1->prev = NULL;
    n1->next = NULL;

    temp = head;

    if (temp == NULL)
    {
        temp = n1;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n1;
        n1->prev = temp;
    }

    cout << "Node inserted \n";
}

void DLL ::dele()
{
    Node *curr, *temp;
    int dat;

    cout << "Enter the node u want to delete : \n";
    cin >> dat;

    curr = head;

    while (curr != NULL)
    {
        if (curr->data = dat)
        {
            break;
        }
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Node not found \n";
    }
    else
    {
        if (curr == head)
        {
            if (curr->next == NULL && curr->prev == NULL)
            {
                head = NULL;
            }
            else
            {
                head = curr->next;
                head->prev = NULL;
            }
        }
        else
        {
            temp = curr->prev;
            if (curr->next != NULL)
            {
                curr->next->prev = temp;
                temp->next = curr->next;
            }
        }
        delete curr;
        cout << "the element is deleted \n";
    }

    getch();
}

void DLL :: join(DLL D1 , DLL D2)
{
    Node * temp1 , *temp2;

    temp1 = D1.head;
    temp2 = D2.head;

    if(temp1 == NULL || temp2 == NULL)
    {
        temp1 = temp2;
    }
    while(temp1 -> next != NULL)
    {
        temp1 = temp1 -> next;
    }
    temp1 -> next = temp2;
}

DLL ::~DLL()
{
    Node * temp , * temp1;
    temp = head;

    while(temp != NULL)
    {   
        temp1 = temp -> next;
        delete temp;
        temp = temp1;
    }
}

int main()
{
    // DLL dobj;

    // int ch1 = 0;
    // int ch2 = 0;
    // int ans = 0;
    // int ival1 = 0;

    // do
    // {
    //     cout << "Program to perform various operations \n";
    //     cout << "1.Create\n";
    //     cout << "2.Display\n";
    //     cout << "3.Search\n";
    //     cout << "4.Insert an element in Linked List\n";
    //     cout << "5.Delete an element is Linked List\n";
    //     cout << "6.Display lenght\n";
    //     cout << "7.Quit\n";
    //     cout << "Choose option (1 - 7)\n";
    //     cout << "Enter ur choice : \n";
    //     cin >> ch1;

    //     switch (ch1)
    //     {
    //     case 1:
    //         dobj.create();
    //         break;

    //     case 2:
    //         dobj.display();
    //         break;

    //     case 3:
    //         cout << "Enter the element u want to search : \n";
    //         cin >> ival1;
    //         dobj.Search(ival1);
    //         break;

    //     case 4:
    //         cout << "The list is \n";
    //         dobj.display();
    //         cout << "Menu \n";
    //         cout << "1.Insert First \n";
    //         cout << "2.Insert After \n";
    //         cout << "3.Insert Last \n";
    //         cout << "Choose option ( 1 - 3) \n";
    //         cin >> ch2;
    //         switch (ch2)
    //         {
    //         case 1:
    //             dobj.insert_at_first();
    //             break;

    //         case 2:
    //             dobj.insert_after();
    //             break;

    //         case 3:
    //             dobj.insert_at_last();
    //             break;

    //         default:
    //             cout << "Invalid choice \n";
    //         }

    //     case 5:
    //         dobj.dele();
    //         break;

    //     case 6:
    //         dobj.length();
    //         break;

    //     case 7:
    //         break;

    //     default:
    //         cout << "Invalid choice \n";
    //         break;
    //     }
    //     cout << "Do you wany to continue \n";
    //     cin >> ans;
    // } while (ans == 'y' || ans == 'Y');
    // getch();


    //For join function

    DLL D1 , D2;
    D1.create();
    D1.display();

    D2.create();
    D2.display();

    D1.join(D1 , D2);

    D1.display();

    return 0;
}