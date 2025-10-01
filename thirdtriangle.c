#include <stdio.h>
int main()
{
    int angle1 = 65;
    int angle2 = 45;

    int tangle = 180 - (angle1 + angle2);

    printf("%d\n", tangle);

    return 0;
}