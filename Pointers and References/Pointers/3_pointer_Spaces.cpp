#include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main() {

    int* p1;
    char* p2;
    float* p3;
    double* p4;
    struct Rectangle* p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl; 

    return 0;

    /* Conclusion- Pointer variable have fixed space 
                  for, 32 byte machine - 4 bytes
                       64 byte machine - 8 bytes  */

    // ! Its Independent of the datatype of pointer because it's only use to store addresses
       
    
}
