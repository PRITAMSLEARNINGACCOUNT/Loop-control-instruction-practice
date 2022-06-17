#include <stdio.h>
int main()
{
    int a = 10, b;
    printf("GIVE AN INTEGER NUMBER\n");
    scanf("%d", &b);
    while (a >= 1)
    {
        printf("SO THE MULTIPLICATION TABLE IN REVERSE WAY %d * %d = %d \n", b, a, a * b);
        a--;
    }
}