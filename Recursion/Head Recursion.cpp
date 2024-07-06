#include <stdio.h>
void function (int n) {

    if (n > 0) {

        function(n - 1); // Head Recursion
        printf("%d ", n);
    }
}

int main() {

    int x = 5;

    function(x);

    return 0;
}