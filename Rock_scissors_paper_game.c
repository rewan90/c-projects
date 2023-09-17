#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int userScore = 0, compScore = 0;
void checkOptions(int user, int comp)
{
    if (user == comp)
    {
        printf(" --------------------\n");
        printf("|    Its a tie       |\n");
        printf(" --------------------\n");
    }
    else if (user == 1)
    {
        if (comp == 2)
        {
            printf(" --------------------\n");
            printf("|      You Won :)    |\n");
            printf("| You : Scissor      |\n");
            printf("| Computer : Paper   |\n");
            printf(" --------------------\n");
            userScore++;
        }
        else
        {
            printf(" --------------------\n");
            printf("|     You Lose :(    |\n");
            printf("| You : Scissor      |\n");
            printf("| Computer : Rock    |\n");
            printf(" --------------------\n");
            compScore++;
        }
    }
    else if (user == 2)
    {
        if (comp == 1)
        {
            printf(" --------------------\n");
            printf("|      You Lose :(   |\n");
            printf("| You : Paper        |\n");
            printf("| Computer : Scissor |\n");
            printf(" --------------------\n");
            userScore++;
        }
        else
        {
            printf(" --------------------\n");
            printf("|     You Won :)     |\n");
            printf("| You : Paper        |\n");
            printf("| Computer : Rock    |\n");
            printf(" --------------------\n");
            compScore++;
        }
    }
    else if (user == 3)
    {
        if (comp == 1)
        {
            printf(" --------------------\n");
            printf("|      You Won :)    |\n");
            printf("| You : Rock         |\n");
            printf("| Computer : Scissor |\n");
            printf(" --------------------\n");
            userScore++;
        }
        else
        {
            printf(" --------------------\n");
            printf("|     You Lose :(    |\n");
            printf("| You : Rock         |\n");
            printf("| Computer : Paper   |\n");
            printf(" --------------------\n");

            compScore++;
        }
    }
    else if (user == 4)
    {
        printf(" --------------------\n");
        if (userScore > compScore)
            printf("|      You Won :)    |\n");
        else if (userScore < compScore)
            printf("|     You Lose :(    |\n");
        else
            printf("|      Its a tie     |\n");
        printf("|     Final Score    |\n");
        printf("| You : %d            |\n", userScore);
        printf("| Computer: %d        |\n", compScore);
        printf(" --------------------\n");
        printf("\a");
    }
    else
    {
        printf("\n Invalid option");
    }
}

int main()

{
    int userChoice, compChoice;
    srand(time(0));

    printf("welcome to rock game");
    while (userChoice != 4)
    {
        printf("\nplease select the option: ");
        printf("\n1.Rock");
        printf("\n2.scissor");
        printf("\n3.paper");
        printf("\n4.Quit\n");

        scanf("%d", &userChoice);

        srand(time(0));
        compChoice = (rand() % 3) + 1;
        checkOptions(userChoice, compChoice);
    }
}