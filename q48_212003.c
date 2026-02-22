#include <stdio.h>
#include <stdbool.h>

bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    int num;
    scanf("%d", &num);

    if(isEven(num))
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
