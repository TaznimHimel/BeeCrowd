#include <stdio.h>
#include <math.h>
int main()
{
    float t, s, fuel;
    scanf("%f%f", &t, &s);
    fuel = (t * s) / 12;
    printf("%0.3f\n", fuel);
    return 0;
}