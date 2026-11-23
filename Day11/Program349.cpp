#include<iostream>
using namespace std;

class Number
{
    public:
        int *Arr;
        int iLength;

        Number(int iSize)
        {
            cout<<"Inside constructor\n";
            this->iLength = iSize;
            this->Arr = new int[iLength];
        }

        ~Number()
        {
            cout<<"Inside destructor\n";
            delete [] this->Arr;
        }
};

int main()
{
    // Step 1 : Allocate memory
    Number *number1 = new Number(5);
    Number *number2 = new Number(7);
    
    // Step 2 : Use the memory

    // Step 3 : Deallocate the memory

    return EXIT_SUCCESS;
}