#include <bits/stdc++.h>
using namespace std;

int main() {


    /* C Style malloc allocation */

    int* p;

    p = (int*) malloc(5 * sizeof(int));

    p[0]=8; p[1]=9; p[2]=10;

    for(int i=0;i<5;i++)
    cout<<i<<" "<<p[i]<<endl;

    free(p);      /* ? Free allocated memory*/



    /* C++ Style allocation */

    int* k;

    k = new int[5];

    k[0]=1; k[1]=2; k[2]=3;

    for(int i=0;i<5;i++)
    cout<<i<<" "<<k[i]<<endl;

    
    delete [] k;   /* delete allocated memory*/


  /* NOTE -                               Difference between
                Array (in Stack)                  And               Array Pointer (in Heap) 

        If we initialize normal array with              But in the case of dynamic heap allocation     
        some integers it will take all other            it takes garbage value rather than zero.
        spaces as by default '0'.   

         */


    return 0;
}
