#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Choice { ROCK, SPOCK, PAPER, LIZARD, SCISSORS };

int main(void) {
    srand((unsigned int)time(NULL));

    printf(
        "Choose (0 = Rock, 1 = Spock, 2 = Paper, 3 = Lizard, 4 = Scissors): ");

    int input;
    if (scanf("%d", &input) != 1) {
        printf("Invalid Input!!!\n");
        return 1;
    }

    enum Choice player = (enum Choice)input;
    enum Choice pc = (enum Choice)(rand() % 5);

    int result = (player - pc + 5) % 5;

    if (result == 0)
        printf("Draw\n");
    else if (result == 1 || result == 3)
        printf("You won (pc had %d)\n", (int)pc);
    else
        printf("You lost (pc had %d)\n", (int)pc);

    return 0;
}
