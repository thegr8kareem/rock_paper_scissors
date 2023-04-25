#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sessions();

int main()
{

    int gameSessions;
    printf("How many session do you want to have for this game: \n");
    scanf("%d", &gameSessions);
    printf("Alright this game will run %d times\n", gameSessions);

    // sessions();
    while (gameSessions >= 1)
    {
        sessions();
        gameSessions--;
    }

    return 0;
}

int sessions()
{
    int number;
    srand(time(0));
    number = rand() % 3 + 1;
    // printf("The random number is: %d \n", number);

    int guess;
    int pc;

    if (number == 1)
    {
        pc = 1;
    }
    else if (number == 2)
    {
        pc = 2;
    }
    else
    {
        pc = 3;
    }

    printf("1 for Rock\n2 for Paper \n3 for Scissors\n");
    printf("Enter your option: \n");
    scanf("%d", &guess);

    // printf("%d and %d",guess,pc);

    if (pc != guess)
    {
        if (guess == 1 && pc == 2)
        {
            printf("Rock loses to Paper\n");
            printf("You've lost this one\n");
        }
        else if (guess == 2 && pc == 1)
        {
            printf("Paper wins against Rock\n");
            printf("You've won this one\n");
        }
        else if (guess == 3 && pc == 1)
        {
            printf("Scissors loses against Rock\n");
            printf("You've lost this one\n");
        }
        else if (guess == 1 && pc == 3)
        {
            printf("Rock wins against Scissors\n");
            printf("You've won this one\n");
        }
        else if (guess == 2 && pc == 3)
        {
            printf("Paper loses against Scissors\n");
            printf("You've lost this one\n");
        }
        else if (guess == 3 && pc == 2)
        {
            printf("Scissors wins against Paper\n");
            printf("You've won this one\n");
        }
    }

    if (pc == guess)
    {
        printf("You both chose %d\n",guess);
        printf("This is a tie\n");
    }
    printf("\n");
}
