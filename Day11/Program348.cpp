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
    Number number1(5);
    Number number2(7);
    
    return EXIT_SUCCESS;
}