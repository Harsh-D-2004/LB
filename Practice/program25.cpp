#include<iostream>
using namespace std;

class Character
{
    private:
        char cValue;

    public:
        Character(char ch)
        {
            cValue = ch;
        }    

        bool CheckCap()
        {
            if((cValue >= 'A') && (cValue <= 'Z'))
            {
                return true;
            }
            return false;
        }

};

int main()
{
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter the character : "<<"\n";
    cin>>ch;

    Character cobj(ch);
    bRet = cobj.CheckCap();

    if(bRet == true)
    {
        cout<<"The character is capital \n";
    }
    else
    {
        cout<<"The character is not capital \n";
    }

    return 0;
}