#include <stdio.h>

int main()
{
    int age, citizenship;
    scanf("%d %d", &age, &citizenship);

    if(age >= 18)
    {
        if(citizenship == 1)
            printf("Eligible to Vote\n");
        else
            printf("Not Eligible (Not Citizen)\n");
    }
    else
    {
        printf("Not Eligible (Under Age)\n");
    }

    return 0;
}
