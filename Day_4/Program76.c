//Input : 4
//4321
#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        printf(" %d\t",iCnt);
        iCnt++;
    }
    printf("\n");
}

int main()
{

    int iValue =0;
   
    Display();

    return EXIT_SUCCESS;
}