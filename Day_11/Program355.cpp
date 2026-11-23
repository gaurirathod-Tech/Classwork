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

        int Summation()
        {
            int iCnt = 0, iSum = 0;
            
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }

        float Average()
        {
            int iCnt = 0, iSum = 0;
            
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return ((float)iSum / (float)iLength);
        }
};

int main()
{
    Number nobj1(5);
    Number nobj2(7);

    nobj1.Accept();
    cout<<"Addition is : "<<nobj1.Summation()<<endl;

    nobj2.Accept();
    cout<<"Addition is : "<<nobj2.Summation()<<endl;

    return EXIT_SUCCESS;
}