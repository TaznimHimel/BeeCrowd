#include <stdio.h>
#include <math.h>
int main()
{
    int n, d, m, y;
    scanf("%d", &n);
    y = n / 365;
    printf("%d ano(s)\n", y);
    d = n - (y * 365);
    m = d / 30;
    printf("%d mes(es)\n", m);
    d = d - (m * 30);
    printf("%d dia(s)\n", d);
    return 0;
}