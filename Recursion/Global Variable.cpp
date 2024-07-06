#include <stdio.h>

int count;  // auto initialized as 0
int fun (int n)
{
    if (n > 0)
    {
        count++;
        return fun (n-1) + count;
        }
        return 0;
            
}
int main ()
{
    printf ("%d\n", fun (3));
    return 0;
}