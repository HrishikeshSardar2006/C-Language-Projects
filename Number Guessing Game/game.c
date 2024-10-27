#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;
    srand(time(0));            // to generate number with current time
    number = rand() % 100 + 1; // to generate a random number between 1 to 100
    printf("Welcome To The Number Guessing Game\n");
    printf("we Have selected A Number Between 1 to  100, So Can You Guess The Right Number\n");
    do
    {
        printf("Enter The Number That You Have Guessed:\n");
        scanf("%d", &guess);
        attempts++;
        if (guess > 100 || guess < 1)
        {
            printf("Sorry,You Have Entered An Invalid Number");
        }
        else if (guess > number)
        {
            printf("Oooops!You Have Guessed A Higher Number\n");
        }
        else if (guess < number)
        {
            printf("Oooops!You Have Guessed A Lower Number\n");
        }
        else
        {
            printf("Congratulations! You have Won The Game\n");
        }

    } while (guess != number);

    return 0;
}
