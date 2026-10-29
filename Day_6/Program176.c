#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = ((iRev * 10) + iDigit);
        iNo = iNo % 10;
    } 
    if(iRev == iNo)     //Issue
    {
        return true;
    }
    else
    {
        return false;
    }
 }


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("It is Palindrome number : \n");
    }
    else
    {
        printf("It is not a Palindrome number : \n");
    }

    return EXIT_SUCCESS;
}