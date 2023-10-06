#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char FileName[30];

    printf("Enter the file that you want to delete \n");
    scanf("%s" , FileName);

    remove(FileName);

    return 0;
}