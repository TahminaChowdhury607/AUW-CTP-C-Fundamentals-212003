#include <stdio.h>

int main()
{
    float temp;
    scanf("%f", &temp);

    if(temp < 20)
        printf("Cold\n");
    else if(temp <= 30)
        printf("Warm\n");
    else
        printf("Hot\n");

    return 0;
}
