#include <stdio.h>
int main()
{
    int a = 1, n;
    printf("WHICH NUMBER DO YOU WANT TO CREATE A MULTIPLICATION TABLE\n");
    scanf("%d", &n);
    while (a <= 10)
    {
        printf("SO THE MULTIPLICATION TABLE IS %d * %d = %d\n", n, a, n * a);
        a++;
    }
}