#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Choice { ROCK = 1, PAPER = 2, SCISSORS = 3 };

int main(void) {
    srand((unsigned int)time(NULL));

    printf("Choose (0 = Rock, 1 = Paper, 2 = Scissors): ");

    int input;
    if (scanf("%d", &input) != 1) {
        printf("Invalid Input!!!\n");
        return 1;
    }

    enum Choice player = (enum Choice)input;
    enum Choice pc = (enum Choice)(rand() % 3);

    if (player == pc)
        printf("Draw\n");
    else if ((player - pc) % 3 == 1)
        printf("You won\n");
    else
        printf("You lost\n");

    return 0;
}
