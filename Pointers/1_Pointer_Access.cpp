#include <bits/stdc++.h>
using namespace std;
int main() {
    
    /* Pointing to a Variable*/

    int a=10; 
    int* p;
    p = &a;     /* Store 'a' variable's address in pointer 'P' */

    cout<<"Original variable: "<<a<<endl;
    cout<<"Pointer variable: "<<p<<endl;
    cout<<"Pointing Variable: "<<*p<<endl;

    /* Pointing to an Array*/

    int A[5]={2,3,4,5,6};
    int* j;
    int* k;

    j = A;       /* Store 'A' Array's address in pointer 'k' */
               // ! Note- Didn't Used '&', as array name is directly an address of Array
    
    k = &A[0];   /* Another way to Store Address*/

    for(int i=0;i<5;i++)
    cout<<k[i]<<endl;
    
    for(int i=0;i<5;i++)
    cout<<j[i]<<endl;
    
    
    return 0;
}
