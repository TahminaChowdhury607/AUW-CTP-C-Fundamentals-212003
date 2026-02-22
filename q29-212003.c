#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("Largest = %d\n", a);
    else if(b > a)
        printf("Largest = %d\n", b);
    else
        printf("Equal\n");

    return 0;
}
