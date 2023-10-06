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
    int iRet = 0;

    printf("Enter the file that u want to open \n");
    scanf("%s" , FileName);

    fd = open(FileName , O_RDONLY);

    iRet = read(fd , Arr , 10);     //10  
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 10);     //10
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 10);     //10
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 10);     //10
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 10);     //10
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 10);     //10
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 10);     //10
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 10);     //10
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 10);     //10
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 5);      //5
    write(1 , Arr , iRet);

    iRet = read(fd , Arr , 5);     //0

    close(fd);

    return 0;
}