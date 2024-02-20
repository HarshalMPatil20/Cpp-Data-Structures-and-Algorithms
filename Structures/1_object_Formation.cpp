#include <bits/stdc++.h>
using namespace std;

struct rectangle{

    string name;               /* 24 Bytes */
    int length;                /* 4 Bytes */
    int breadth;               /* 4 Bytes */
    char Character;            /* 4 Bytes */
    char Character_Array[2];   /* 4*2= 8 Bytes */    
                               /* total = 40 Bytes */
                               
                               /* 3 ways to create objects of structure */

}r2,r3,r4;                /* 1. Immediate object formation */

rectangle r1,r5;          /* 2. object declaration */

rectangle r[2];           /* 3. Array */


int main() {

    rectangle r1={"aaaa",10, 5,'a',{'a','a'}};
    // ! In C program, 'struct' is mandatory before 'rectangle'
    
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    cout << r1.name << endl;
    cout << r1.Character << endl;
    cout << r1.Character_Array << endl;
    cout << sizeof(r1) << endl;        /* You can minimize wasted Space by simply ordering members by size (Largest Member first)*/
    return 0;
}

