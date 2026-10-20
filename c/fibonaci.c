#include <stdio.h>

int main(void) {
    int index;
    printf("Enter index: ");
    if (scanf("%d", &index) != 1) {
        printf("Invalid Input!!!\n");
        return 1;
    }

    int x = 0, y = 1;

    for (int i = 0; i < index - 1; i++) {
        int next = x + y;
        x = y;
        y = next;
    }

    printf("Result: %d", index == 0 ? 0 : y);

    return 0;
}
