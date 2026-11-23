#include<iostream>
using namespace std;

class Number
{
    private:
        int *Arr;
        int iLength;

    public:
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

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the elements : \n";

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the array are : \n";

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
};

int main()
{
    int iSize = 0;

    cout<<"Enter number of elements : \n";
    cin>>iSize;

    // Step 1 : Allocate memory
    Number *number1 = new Number(iSize);
    
    // Step 2 : Use the memory
    number1->Accept();
    number1->Display();

    // Step 3 : Deallocate the memory
    delete number1;

    return EXIT_SUCCESS;
}