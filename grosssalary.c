#include <stdio.h>
int main()
{
    int BASESALARY = 100;
    int HRA = 10;
    int DA = 5;
    int TA = 8;

    float floatresult;
    floatresult = BASESALARY * (HRA / 100.0 + DA / 100.0 + TA / 100.0);

    printf("\nSalary = %f\n", BASESALARY + floatresult);

    return 0;
}
