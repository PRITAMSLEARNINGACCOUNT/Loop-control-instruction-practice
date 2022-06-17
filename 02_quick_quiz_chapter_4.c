#include<stdio.h>
int main(){
    int i,a;
    printf("FROM WHICH NUMBER AM O HAVE TO START PRINTING\n");
    scanf("%d",&i);
    printf("TO HOW MUCH NUMBER AM I HAVE TO PRINT\n");
    scanf("%d",&a);
    do
    {
        printf("PRINT THE NUMBER %d\n",i);
        i++;
    } while (i<=a);
    
}