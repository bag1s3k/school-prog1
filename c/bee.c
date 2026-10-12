#include <stdio.h>

int main(void) {
    printf("Enter year: ");
    int year;
    if (scanf("%d", &year) != 1) {
        printf("Invalid input!!!\n");
        return 1;
    }

    switch (year % 5) {
    case 0:
        printf("blue\n");
        break;
    case 1:
        printf("white\n");
        break;
    case 2:
        printf("yellow\n");
        break;
    case 3:
        printf("red\n");
        break;
    case 4:
        printf("green\n");
        break;
    }
    return 0;
}
