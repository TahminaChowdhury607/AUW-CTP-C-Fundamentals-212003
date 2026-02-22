#include <stdio.h>

int main()
{
    int arr[5], count = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
            count++;
    }

    printf("Positive Numbers Count = %d\n", count);

    return 0;
}
