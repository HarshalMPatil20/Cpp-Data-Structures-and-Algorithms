#include <bits/stdc++.h>
using namespace std;

// Two types of parameter passing for array in function
// When we pass array as parameter for function, 
// It Always, Called By Address.
// Array is only accessible within the function where it's created, Otherwise it is accessed through it's pointer to it's name address

// 1. Array Name

void fun1(int arr[], int arr_length){     

    for(int i=0;i<arr_length;i++)
    cout<<arr[i]<<endl;

    cout<<sizeof(arr)<<endl;   // output- 8... size of pointer of array

}


// 2. Array Name Pointer (As array is already an address)

void fun2(int *arr, int arr_length){     

    for(int i=0;i<arr_length;i++)
    cout<<arr[i]<<endl;

    cout<<sizeof(arr)<<endl;   // output- 8... size of pointer of array

}

int main() {
   
    int A[]={1,2,3,4,5};
    int A_length=5;

    cout<<sizeof(A)<<endl;    // output- 20... size of whole array as it's created here.

    for(int x:A)
    cout<<x<<endl;

    fun1(A,A_length);
    fun2(A,A_length);

    return 0;
}

