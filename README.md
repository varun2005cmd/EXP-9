
# Experiment 9 To study and implement C++ Pointer basics

## Aim: -
To learn about pointers, how to implemnent pointers for different data types, how to make and print an array using pointers.

## Theory:-
Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 
The address of the variable you’re working with is assigned to the pointer variable that points to the same data type (such as an int or string).

### Advantages of pointers 
1. Dynamic memory allocation
2. Return multiple values from a function
3. Alter original data
4. Passing data between functions efficently

### Disadvantages of pointers
1. Pointers are a bit difficult to understand.
2. Pointers can cause several errors, such as segmentation errors or unrequired memory access.
3. If a pointer has an incorrect value, it may corrupt the memory.
4. Pointers may also cause memory leakage.

### Applications of pointers 
1. to allocate new objects on the heap,
2. to pass functions to other functions
3. to iterate over elements in arrays or other data structures.

## Code: -
~~~
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
~~~

## Code Output: 

![image](https://github.com/user-attachments/assets/793ad140-8836-4580-80fa-9d435e869bd8)


## Conclusion: -
In this experiment we learnt the basics of pointers
We learnt how to create and print an array using pointers 
   
