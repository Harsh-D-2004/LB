#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char FileName[50];
    char Arr[10] = {'\0'};
    int fd = 0;

    printf("Enter the file that u want to open \n");
    scanf("%s" , FileName);

    fd = open(FileName , O_RDONLY);

    read(fd , Arr , 10);
    write(1 , Arr , 10);

    read(fd , Arr , 10);
    write(1 , Arr , 10);

    close(fd);

    return 0;
}