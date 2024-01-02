#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RPS_game(char user_choice, char computer_choice)
{
    if (user_choice == computer_choice) // Rock vs Rock or Paper vs Paper or Scisssor vs Scissor
    {
        return 0; // -> No one wins
    }
    else if (user_choice == 'R' && computer_choice == 'S') // Rock vs Scissor
    {
        return 1; // -> Rock wins
    }
    else if (user_choice == 'R' && computer_choice == 'P') // Rock vs Paper
    {
        return 1; // -> Paper wins
    }
    else if (user_choice == 'S' && computer_choice == 'P') // Scissor vs Paper
    {
        return 1; // -> Scissor wins
    }
    else if (user_choice == 'S' && computer_choice == 'R') // Scissor vs Rock
    {
        return -1; // -> Rock wins
    }
    else if (user_choice == 'P' && computer_choice == 'S') // Paper vs Scissor
    {
        return -1; // -> Scissor wins
    }
    else if (user_choice == 'P' && computer_choice == 'R') // Paper vs Rock
    {
        return -1; // -> Rock wins
    }
}

int main()
{
    int play;
    char computer_choice, user_choice;

    printf("*********************** Welcome to Rock Paper Scissor Game ***********************\n\n");

    printf("\t\t\t RULES of the Game are as follows: -\n");
    printf("-> The Game will be played between the Computer and You.\n");
    printf("-> Each player simultaneously forms one of three shapes: Rock(R) / Paper(P) / Scissor(S)\n");
    printf("-> The winner of the game is decided as per the below rules: -\n");
    printf("-> Rock vs Paper -> Paper wins\n");
    printf("-> Rock vs Scissor -> Rock wins\n");
    printf("-> Paper vs Scissor -> Scissor wins\n");
    printf("-> Rock vs Rock or Paper vs Paper or Scisssor vs Scissor -> No one wins\n");
    printf("-> In this game, the user will be asked to make choice and according to the choice of user and computer and then the result will be displayed along with the choices of both computer and user.\n\n");

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ BEST OF LUCK !! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printf("\t\tDo you want to play ? \n\t\tEnter 1 for \"YES\" \n\t\tEnter 0 for \"NO\"\n");
    scanf("%d", &play);
    
    while (play)
    {
        printf("\n\n########################## Game Starts ##########################\n\n");

        srand(time(NULL));
        int num = rand() % 3;

        if (num == 0)
        {
            computer_choice = 'R';
        }
        else if (num == 1)
        {
            computer_choice = 'P';
        }
        else
        {
            computer_choice = 'S';
        }

        printf("\n\nEnter R for ROCK, P for PAPER and S for SCISSOR\n\n");
        fflush(stdin);
        scanf("%c", &user_choice);

        int result = RPS_game(user_choice, computer_choice);
        if (result == 0)
        {
            printf("\n\nThis Game is a Draw, No-one wins!!\n\n");
        }
        else if (result == -1)
        {
            printf("\n\nThis Game is won by Computer!!\n\n");
        }
        else // result == 1
        {
            printf("\n\nThis Game is won by you!!\n\n");
        }

        printf("\n\n############################ Game ends ############################\n\n");

        printf("\t\tDo you want to play again? \n\t\tEnter 1 for \"YES\" \n\t\tEnter 0 for \"NO\"\n");
        scanf("%d",&play);

    }

    printf("Terminating the Game\n");

    return 0;
}
