#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    float y, distance;
    scanf("%f", &y);
    distance = x / y;
    printf("%.3f km/l\n", distance);
    return 0;
}