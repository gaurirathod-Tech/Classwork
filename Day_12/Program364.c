#include<stdio.h>
#include<stdlib.h>

void EvenOddCount(int Arr[], int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }

    printf("Number of even elements : %d, odd elements : %d\n",iCountEven, iCountOdd);
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(NULL == ptr)
    {
        printf("Error : Unable to allocate the memory\n");
        return EXIT_FAILURE;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    EvenOddCount(ptr,iSize);

    free(ptr);

    return EXIT_SUCCESS;
}
