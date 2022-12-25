#include <stdio.h>
int main()
{
    int notes,ext;
    scanf("%d",&notes);
    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes/100);
    ext=notes%100;
    printf("%d nota(s) de R$ 50,00\n", ext/50);
    ext=ext%50;
    printf("%d nota(s) de R$ 20,00\n", ext/20);
    ext=ext%20;
    printf("%d nota(s) de R$ 10,00\n", ext/10);
    ext=ext%10;
    printf("%d nota(s) de R$ 5,00\n", ext/5);
    ext=ext%5;
    printf("%d nota(s) de R$ 2,00\n", ext/2);
    ext=ext%2;
    printf("%d nota(s) de R$ 1,00\n", ext/1);
    return 0;
}