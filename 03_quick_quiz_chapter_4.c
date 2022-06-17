#include<stdio.h>
int main(){
    int a,n;
    printf("GIVE THE STARTING NUMBER TO PRINT\n");
    scanf("%d",&a);
    printf("GIVE THE LAST NUMBER\n");
    scanf("%d",&n);
    for ( a,n; a <= n; a++)
    {
        printf("SO THE NUMBER'S %d\n",a);
    }
    
}