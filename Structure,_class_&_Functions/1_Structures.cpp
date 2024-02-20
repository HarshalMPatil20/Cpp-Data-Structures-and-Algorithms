#include <bits/stdc++.h>
using namespace std;

/* 
* You can declare functions of Structure in and out of it, 
* just make changes in parameter due to access constraints */

// 1. Declare Functions out of Structure, each time by passing rectangle name or pointer or reference as parameter

struct Rectangle
{
    int length;
    int Breadth;
};

void initialize(struct Rectangle *r,int length,int Breadth)
{
    r->length=length;
    r->Breadth=Breadth;
}

int area(struct Rectangle r)
{
    return r.length*r.Breadth;
}

void change_length(struct Rectangle *r, int length)
{
    r->length=length;
}

int main() {

    struct Rectangle r; 
    initialize(&r,10,5);
    cout<<area(r)<<endl;
    change_length(&r,15);

    cout<<r.length<<endl<<r.Breadth<<endl; 
    
    
    return 0;
}

