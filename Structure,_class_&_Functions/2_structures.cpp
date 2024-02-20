#include <bits/stdc++.h>
using namespace std;

/* You can declare functions of Structure in and out of it, 
just make changes in parameter due to access constraints */

// 2. Declare Functions In the Structure, No need of passing rectangle as parameter each time , treat function as Attribute

struct Rectangle{

    int length;
    int Breadth;


void initialize(int length,int Breadth)
{
    length=length;
    Breadth=Breadth;
}

int area()
{
    return length*Breadth;
}

void change_length( int length)
{
    length=length;
}

};

int main() {

    struct Rectangle r; 
    
    r.initialize(10,5);   // Use function of Specific object by using '.' Dot-Operator
    cout<<r.area()<<endl;
    r.change_length(15);

    cout<<r.length<<endl<<r.Breadth<<endl; 
    
    
    return 0;
}

