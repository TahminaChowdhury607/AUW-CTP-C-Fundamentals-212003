#include <stdio.h>

int main()
{
    int arr[5], largest;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if(i == 0)
            largest = arr[i];
        else if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest = %d\n", largest);

    return 0;
}
