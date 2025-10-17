#include <stdio.h>

int main()
{
    int num, count = 0, i;

    printf("Enter any number: ");
    scanf("%d", &num);

    // Handle 0 as a special cases
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        // for loop to count digits
        for (i = num; i != 0; i = i / 10)
        {
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}
