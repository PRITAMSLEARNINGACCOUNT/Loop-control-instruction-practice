#include <stdio.h>
int main()
{
    int give_a_number, sum = 1, the_number = 1;
    printf("GIVE A NUMBER YOU WANT TO EXTRACT THE FACTORIAL'S\n");
    scanf("%d",&give_a_number);
    while (the_number <= give_a_number)
    {
        sum *= the_number;
        
        the_number++;
    }
    printf("SO THE FACTORIAL OF YOUR GIVEN NUMBER %d IS %d\n",give_a_number, sum);
}