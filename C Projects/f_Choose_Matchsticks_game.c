#include <stdio.h>
#define MATCHES 21

int Game(int matches_num, int choice)
{
    int user_choice;
    int computer_choice;

    if (choice==0)
    {
        return 0;
    }

    printf("############################ GAME START ############################");

    while (choice)
    {

        printf("\n\nNumber of Matches left = %d.\n", matches_num);
        printf("Pick up 1, 2, 3 or 4 matches: -\n");
        scanf("%d", &user_choice);
        printf("You picked %d matchstick(s).\n", user_choice);

        if ((user_choice > 4) || (user_choice < 1))
        {
            printf("Warning, Choose from only valid choices !!\n");
            break;
        }

        matches_num -= user_choice;

        printf("\n\n Number of Matches left = %d.\n", matches_num);
        computer_choice = 5 - user_choice;
        printf("Out of given choices, the Computer picked %d matchstick(s).\n", computer_choice);
        matches_num -= computer_choice;

        if (matches_num == 1)
        {
            printf("\n\n Number of Matches left = %d.\n", matches_num);
            printf("You lost the game !!\n");
            printf("############################ GAME OVER ############################");
            break;
        }
    }
    return 0;
}

int main()
{
    int matchsticks_num = MATCHES;
    int play;

    printf("*********************** Welcome to Matchsticks Game ***********************\n\n");

    printf("\t\t\t RULES of the Game are as follows: -\n");
    printf("-> The Game will be played between the Computer and You.\n");
    printf("-> There are %d Matchsticks.\n",matchsticks_num);
    printf("-> The Computer asks you to pick 1, 2, 3 or 4 matchsticks.\n");
    printf("-> Then, the Computer chooses to pick 1, 2, 3 or 4 matchsticks.\n");
    printf("-> Whoever is forced to pick up the last matchstick loses the game.\n\n");

    printf("~~~~~~~~~~~~~~~~ BEST OF LUCK !! ~~~~~~~~~~~~~~~~\n\n");

    printf("\t\t Do you want to play ? \n\t\tEnter 1 for \"YES\" \n\t\tEnter 0 for \"NO\"\n");
    scanf("%d", &play);

    do
    {
        Game(matchsticks_num, play);

        printf("\n\t\t Game Ended, Do you want to play again? \n\t\tEnter 1 for \"YES\" \n\t\tEnter 0 for \"NO\"\n");
        scanf("%d", &play);
        if (play == 0)
        {
            printf("\t\tTerminating the Game\n");
        }
    } while (play != 0);

    return 0;
}
