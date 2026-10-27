//Input : 4
//4321
#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 4; iCnt >= 1 ;iCnt--)
    {
        printf(" %d\t",iCnt);
    }
    printf("\n");
}

int main()
{

    int iValue =0;
   
    Display();

    return EXIT_SUCCESS;
}