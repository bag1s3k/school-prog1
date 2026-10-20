#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int spaces[3];

    for (int i = 0; i < 3; i++)
        spaces[i] = rand() % 10 + 1;

    int active_user = 1;
    while (1) {
        for (int j = 0; j < 3; j++)
            printf("Space %d: %d\n", j + 1, spaces[j]);

        int space, amount;

        int winner = (active_user < 0) ? 2 : 1;
        printf(
            "How many items user %d wanna delete and from which space? (space, "
            "amount): ",
            winner);
        if (scanf("%d, %d", &space, &amount) != 2) {
            printf("Invalid Input!!!\n");
            return 1;
        }

        space--;

        if (space < 0 || space >= 3 || amount < 1 || amount > spaces[space]) {
            printf("Invalid Move!!!\n");
        } else {
            spaces[space] -= amount;
            active_user *= -1;
        }

        int end = 1;
        for (int j = 0; j < 3; j++)
            if (spaces[j] != 0) {
                end = 0;
                break;
            }

        if (end)
            break;
    }

    int winner = (active_user < 0) ? 1 : 2;

    printf("User %d has won\n", winner);

    return 0;
}
