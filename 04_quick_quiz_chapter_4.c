#include <stdio.h>
int main()
{
    int a, n;
    printf("GIVE THE STARTING NUMBER\n");
    scanf("%d", &a);
    printf("GIVE THE LAST NUMBER\n");
    scanf("%d", &n);
    for (a, n; a <= n; n--)
    {
        printf("PRINTING NUMBER'S IN REVERSE WAY %d \n", n);
    }
    return 0;
}