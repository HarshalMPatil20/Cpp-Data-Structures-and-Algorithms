#include <bits/stdc++.h>
using namespace std;

struct address{
    char* name;
    long int number;
    char* street;
    char* town;
    char state[4];
    long zip;

}jd;



int main() {

    
    cout << sizeof(jd) << endl;        /* You can minimize wasted Space by simply ordering members by size (Largest Member first)*/
    return 0;
}

