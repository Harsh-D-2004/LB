//write a program which accepts the marks and displays the class accordingly

#include<stdio.h>

void DisplayClass(float fNo)
{
    if((fNo > 100))   //Filter
    {
        printf("Wrong input\n");
        printf("Please enter percentage under 100\n");
    }
    if((fNo>=0.0f) && (fNo <= 34.0f))
    {
        printf("Fail");
    }
    else if((fNo>=35.0f) && (fNo <= 49.0f))
    {
        printf("Pass");
    }
    else if((fNo>=50.0f) && (fNo <= 59.0f))
    {
        printf("Second Class");
    }
    else if((fNo>=60.0f) && (fNo <= 74.0f))
    {
        printf("First Class");
    }
    else if((fNo>=75.0f) && (fNo <= 100.0f))
    {
        printf("First Class with Distinction");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage out of 100 : \n");
    scanf("%f" , &fValue);

    DisplayClass(fValue);

    return 0;
}