#include<stdio.h>
//program sluzy do znalezienia najwiekszej liczby
int main()
{
    int x, y, z, t;
    printf("podaj liczby\n");
    scanf("%d %d", &x, &y);
    if(x>y) z=x;
    else z=y;
    printf("podaj liczby\n");
    scanf("%d", &t);
    if(t>z) z=t;
    printf("najwieksza liczba to %d\n", z);
    return 0;
}