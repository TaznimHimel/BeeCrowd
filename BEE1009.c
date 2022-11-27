#include <stdio.h>
int main()
{
    char SN;
    float fs, ts, bonus,TOTAL;
    scanf("%c", SN);
    scanf("%f %f", &fs, &ts);
    bonus = (ts * 15) / 100;
    printf("TOTAL = R$ %0.2f",TOTAL = fs + bonus);
    return 0;
}