#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int t, s;
    float fuel;
    scanf("%d%d", &t, & s);
    fuel = (t * s) / 12;
    printf("%0.3f\n", fuel);
    return 0;
}