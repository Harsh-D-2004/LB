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
    int iCnt= 0 , iCount1 = 0 , iCount2 = 0 , iCount3 = 0;

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
        for(iCnt = 0 ; iCnt < iRet ; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount1++;
            }
            else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount2++;
            }
            else if((Arr[iCnt] >= '0') && (Arr[iCnt] <= '9'))
            {
                iCount3++;
            }
        }
    }

    printf("Number of smallcase letters are : %d\n" , iCount2);
    printf("Number of capcase letters are : %d\n" , iCount1);
    printf("Number of digits are : %d\n" , iCount3);

    close(fd);

    return 0;
}