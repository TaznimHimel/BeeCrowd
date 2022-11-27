#include <stdio.h>
int main()
{
    double salary, value, TOTAL;
    char name;
    scanf("%s %lf  %lf", &name, &salary, &value);
    TOTAL = salary + value * 0.15;
    printf("TOTAL = R$ %0.2f\n", TOTAL);
    return 0;
}