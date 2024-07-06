#include <stdio.h>
int fun (int n)
{
    static int count ; // auto initialized as 0
    if (n > 0)
    {
        count++;
        return fun (n-1) + count;
    }
    return 0;
}

int main ()
{
    int X = 3;
    printf ("%d", fun(X));
    return 0;
}