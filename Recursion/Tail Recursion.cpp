#include <stdio.h>
void function (int n) {

    if (n > 0) {

        printf("%d ", n);
        
        function(n - 1); // Tail Recursion
        
    }
}

int main() {

    int x = 5;

    function(x);
    
    return 0;
}