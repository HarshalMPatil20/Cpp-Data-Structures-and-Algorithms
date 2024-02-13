#include <bits/stdc++.h>
using namespace std;

/* Call by Address Directly access location of variables */ 

void Swap(int *x, int *y)  //Pointers to Address as Formal Parameters
{

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int a=10,b=20;

    cout<<"Before Swapping: "<<a<<" "<<b<<endl;
    // 10 20

    Swap( &a, &b);    // address as Actual Parameter
    
    cout<<"After Swapping: "<<a<<" "<<b<<endl;
    // 20 10 - Swapped
    
    return 0;
}

