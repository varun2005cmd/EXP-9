// Varun Pendem
// PRN: 23070123149
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aptr = &a;
    cout<<"value of the pointer that points to a: "<<*aptr<<endl;
    *aptr = 20;
    cout<<"updating value using pointer: "<<a<<endl;

    float pi = 3.14;
    float *piptr = &pi;
    cout<<"value of pi"<<pi<<endl;
    cout<<"pointer at pi"<<piptr<<endl;
    cout<<"dereferencing pi "<<*piptr<<endl;
    cout<<"referencing pi"<<&pi<<endl;


    int arr[] = {5,90,30};
    int *arrptr = &arr[3];
    cout<<arrptr<<endl;
    cout<<"printing the array by dereferencing its pointers: "<<endl;

    // printing the array using pointers 
    for(int i = 0;i<3;i++)
    {
        cout<<(*(arr+i))<<endl; 
    }


    return 0;
}
