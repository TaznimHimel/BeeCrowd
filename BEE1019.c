#include <stdio.h>
int main()
{
    int scnd, h, m, s, e;
    scanf("%d", &scnd);
    h = scnd / 3600;
    printf("%d:", h);
    scnd = scnd - (h * 3600);
    m = scnd / 60;
    printf("%d:", m);
    scnd = scnd - (m * 60);
    printf("%d", scnd);
    return 0;
}