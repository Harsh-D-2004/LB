#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0;
    char Arr[] = "abcdefghijklmnopqrstuvwxyz";

    printf("Enter the file name that you want to open : \n");
    scanf("%s" , Fname);

    fd = creat(Fname , O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with fd %d\n" , fd);
    }

    iRet = write(fd , Arr , 10);

    printf("%d bytes gets succesfully written in the file \n" , iRet);

    close(fd);

    return 0;
}