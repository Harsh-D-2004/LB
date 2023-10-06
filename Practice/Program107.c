//Towers of Hanoi

#include<stdio.h>

void TowersOfHanoi(int n , int s , int d , int h)
{
    if(n > 0)
    {
        TowersOfHanoi(n-1 , s , h , d);
        printf("The %d disks moved from %d tower to %d tower using %d tower \n" , n , s , d , h);
        TowersOfHanoi(n-1 , h , d , s);
    }
}



int main()
{
    int n = 0;
    int s = 1 , d = 3 , h = 2;

    printf("Enter the number of plates : ");
    scanf("%d" , &n);

    TowersOfHanoi(n , s , d , h);

    return 0;
}