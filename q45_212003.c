#include <stdio.h>

int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse Order: ");
    for(int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
