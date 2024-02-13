#include <bits/stdc++.h>
using namespace std;

/* Call by value only access current value of variables */ 

void Swap(int x, int y){

    int temp;

    temp=x;
    x=y;
    y=temp;
}

int main() {

    int a=10,b=20;

    cout<<"Before Swapping: "<<a<<" "<<b<<endl;
    // 10 20

    Swap(a,b);
    
    cout<<"After Swapping: "<<a<<" "<<b<<endl;
    // 10 20 - NO Swap

    return 0;
}

