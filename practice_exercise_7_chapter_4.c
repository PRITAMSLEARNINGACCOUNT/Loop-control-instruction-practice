#include <stdio.h>
int main()
{
    int give_a_number, the_number = 2, prime;
    printf("GIVE THE NUMBER TO CHEECK WHEATHER IT IS A PRIME NUMBER OR NOT\n");
    scanf("%d", &give_a_number);
    while (the_number < give_a_number)
    {
        if (give_a_number % the_number == 0)
        {
            prime = 1;
        }
        //else
        //{
        //    prime != 0;
        //}
        the_number++;
    }
    if (prime == 1)
    {
        printf("THE NUMBER IS NOT A PRIME NUMBER\n");
    }
    else
    {
        printf("THE NUMBER IS NOW A PRIME NUMBER\n");
    }
}