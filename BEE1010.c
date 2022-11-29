#include <stdio.h>
int main()
{
    double code1, units1, price1, code2, units2, price2, total;
    scanf("%lf %lf %lf", &code1, &units1, &price1);
    scanf("%lf %lf %lf", &code2, &units2, &price2);
    total = (units1 * price1 + units2 * price2);
    printf("VALOR A PAGAR: R$ %0.2lf\n", total);

    return 0;
}