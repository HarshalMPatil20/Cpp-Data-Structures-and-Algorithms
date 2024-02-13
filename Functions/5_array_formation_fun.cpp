#include <bits/stdc++.h>
using namespace std;


/* creating Array in heap can access in anywhere in the program using it's pointer*/ 

int * fun(int arr_length){     

   int * p;

   p = new int[arr_length];
// p = (int *) malloc(arr_length * sizeof(int));

   for(int i=0; i<arr_length;i++) // Filling array with desired elements              
   p[i]=i+1;

   return p;

}



int main() {
   
   int * p, length=5;

   p=fun(length);

   for(int i=0;i<length;i++)
   cout<<p[i]<<endl;
    

    return 0;
}

