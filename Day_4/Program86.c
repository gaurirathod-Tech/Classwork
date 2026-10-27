/*
----------------------------------------------------------------------
                                Operation ||
----------------------------------------------------------------------
Result1                      Result2                     Final Result
----------------------------------------------------------------------
TRUE                          TRUE                           TRUE    // Short Circuit
TRUE                          FALSE                          TRUE    // Short Circuit
FALSE                         TRUE                           TRUE
FALSE                         FALSE                          FALSE
----------------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>
void ChekDivisible(int iNo)
{
    if(((iNo % 3 == 0) || (iNo % 5) == 0))
    {
        printf("It is Divisible by 3 & 5.\n");
    }
    else
    {
        printf("It is not Divisible by 3 & 5.\n");

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