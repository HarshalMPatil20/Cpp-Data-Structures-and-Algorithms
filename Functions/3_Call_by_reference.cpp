#include <bits/stdc++.h>
using namespace std;

/* Call by Reference directly access current variable by other name */ 

void Swap(int &x, int &y)  // Created References as Formal Parameters
{

    int temp;

    temp=x;
    x=y;
    y=temp;
}

/* Generally using call by reference, Directly Paste the definition of function in main function
 in code frame of Main memory and act as Monolithic code even it is written in Modular Form of code.
 And It's not good practice for large programs, Hence We generally don't use call by reference.... */

int main() 
{

    int a=10,b=20;

    cout<<"Before Swapping: "<<a<<" "<<b<<endl;
    // 10 20

    Swap(a,b);   
    
    cout<<"After Swapping: "<<a<<" "<<b<<endl;
    // 20 10 - Swapped
    
    return 0;
}

