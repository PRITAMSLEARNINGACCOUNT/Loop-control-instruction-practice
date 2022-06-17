#include <stdio.h>
int main()
{
    int initial_number, sum = 0, give_a_number;
    printf("GIVE AN INITIAL NUMBER\n");
    scanf("%d", &initial_number);
    printf("GIVE A NUMBER\n");
    scanf("%d", &give_a_number);
    //THE PROGRAMME IS IMPLEMENTED ON FOR LOOP.
    //for (initial_number; initial_number <= give_a_number; initial_number++)
    //{
    //    sum += initial_number;
    //    
    //}
    //printf("SO THE SUM OF YOUR GIVEN NUMBER IS %d\n",  sum);
    //NOW IT'S TIME TO IMPLEMENT IT ON DO WHILE LOOP
    do
    {
        sum+=initial_number;
        initial_number++;
    } while (initial_number <= give_a_number);
    printf("THE SUM OF YOUR GIVEN NUMBER'S ARE %d\n",sum);
    
}