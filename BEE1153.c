#include <stdio.h>
int main()
{
    int N, i, a = 1;
    scanf("%d", &N);
    for (i = N; i >= 1; i--)
    {
        a = a * i;
    }
    printf("%d\n", a);

    return 0;
}
