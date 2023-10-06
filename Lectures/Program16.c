#include<stdio.h>

void Display()
{
    //Common Statement - printf("___\n")

    int iCnt = 0;
    for(iCnt = 1 ; iCnt<=5 ; iCnt++)
    {
        printf("%d\n" , iCnt);
    }

}

int main()
{
    Display();

    return 0;
}
