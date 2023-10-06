#include<iostream>
using namespace std;

class Character
{
    private:
        char cValue;

    public:
        Character(char X)
        {
            cValue = X;
        }

        bool CheckSmall()
        {
            if((cValue >= 'a') && (cValue <= 'z'))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter the character : \n";
    cin>>ch;

    Character cobj(ch);

    bRet = cobj.CheckSmall();

    if(bRet == true)
    {
        cout<<"The letter is small \n";
    }
    else
    {
        cout<<"The letter is capital \n";
    }

    return 0;
}