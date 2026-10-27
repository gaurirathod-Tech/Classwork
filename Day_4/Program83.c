#include<stdio.h>
#include<stdlib.h>
void ChekDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("It is Divisible by 3\n");
    }
    else
    {
        printf("It is not Divisible by 3\n");

    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    ChekDivisible(iValue);
    
    return EXIT_SUCCESS;
}