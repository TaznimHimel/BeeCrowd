#include <stdio.h>
int main()
{
    int NUMBER, WH;
    float SALARYPH, SALARY;
    scanf("%d%d", &NUMBER, &WH);
    scanf("%f", &SALARYPH);
    SALARY = SALARYPH * WH;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}