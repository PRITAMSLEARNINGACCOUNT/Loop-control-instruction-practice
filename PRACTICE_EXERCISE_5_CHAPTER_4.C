#include<stdio.h>
int main(){
    int a_number=1,second_number=8,third_number;
    printf("GIVE THE NUMBER HOW MUCH YOU WANT TO PRINT IN THIS MULTIPLICATION TABLE OF 8");
    scanf("%d",&third_number);
    while (a_number<=third_number)
    {
        printf("SO THE MULTIPLICATION OF THE TABLE OF 8 IS %d*%d=%d\n\n",second_number,a_number,a_number*second_number);
        a_number++;
    }
    
}