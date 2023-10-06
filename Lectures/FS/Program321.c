#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0;
    char Arr[50];

    printf("Enter the file name that you want to open : \n");
    scanf("%s" , Fname);

    printf("Enter the data you want to write : \n");
    scanf(" %[^'\n']s" , Arr);

    fd = open(Fname , O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with fd %d\n" , fd);
    }

    iRet = write(fd , Arr , strlen(Arr));

    printf("%d bytes gets succesfully written in the file \n" , iRet);

    close(fd);

    return 0;
}