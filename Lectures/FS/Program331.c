#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char FileName[50];
    char Arr[BUFFER_SIZE] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter the file that u want to open \n");
    scanf("%s" , FileName);

    fd = open(FileName , O_RDONLY);

    while(1)
    {
        iRet = read(fd , Arr , sizeof(Arr)); 
        if(iRet == 0)
        {
            break;
        }
        write(1 , Arr , iRet);
    }

    close(fd);

    return 0;
}