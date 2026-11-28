#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(NULL = ptr)  // ISSUE
    {
        printf("Error : Unable to allocate the memory\n");
        return EXIT_FAILURE;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // Function Call

    free(ptr);

    return EXIT_SUCCESS;
}
