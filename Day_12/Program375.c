#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Bi-Directional Search

bool SearchElement(int Arr[], int iLength, int iNo)
{
    int iStart = 0, iEnd = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iLength - 1;

    while(iStart <= iEnd)
    {
        if((Arr[iStart] == iNo) || (Arr[iEnd] == iNo))
        {
            bFlag = true;
            break;      // Early Exit
        }
        iStart++;
        iEnd--;
    }
    return bFlag;
}

// Time Complexity : O(N/2) -> Worst

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet = false;

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

    printf("Enter the number that you want to search : \n");
    scanf("%d",&iValue);

    bRet = SearchElement(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("There is no such element\n");
    }
    
    free(ptr);

    return EXIT_SUCCESS;
}
