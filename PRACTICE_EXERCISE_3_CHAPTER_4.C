#include <stdio.h>
int main()
{
    int initial_number, sum = 0, give_a_number;
    printf("GIVE AN INITIAL NUMBER\n");
    scanf("%d", &initial_number);
    printf("NOW GIVE A NUMBER\n");
    scanf("%d", &give_a_number);
    while (initial_number <= give_a_number)
    {
        sum += initial_number;

        initial_number++;
    }
    printf("SO THE SUM IS %d\n", sum);
    return 0;
}