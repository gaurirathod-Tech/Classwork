#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name       :  Addition
//  Input               :  Integer,Integer
//  Output              :  Integer
//  Description         :  Performs addition
//  Date                :  04/10/2026
//  Author              :  Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////////////

int Addition(
    
                 int iNo1,       // First Number
                 int iNo2        //Second Number
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;          // Business Logic

    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid \n");

        return EXIT_FAILURE;
    }

    printf("Enter Second number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid \n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1, iValue2);             

    printf("Addition is : %d\n",iResult);
    
    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////
//  Step 5 :  Test the program
//
//                           Tested test cases
//--------------------------------------------------------------------------------
//      Input 1                Input 2                  Output          
//--------------------------------------------------------------------------------
//        10                     11                       21
//        11                      0                        11
//
///////////////////////////////////////////////////////////////////////////////////