#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    printf("Zadej rozmery ve formatu: 'x y z': ");
    int x, y, z;

    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        printf("Incorrect input!!!\n");
        return 1;
    }

    if (x > y)
        swap(&x, &y);
    if (x > z)
        swap(&x, &z);
    if (y > z)
        swap(&y, &z);

    if (x > 0 && y > 0 && z > 0 && x + y > z) {
        printf("trojuhelnik:\n- je platny\n");
    } else {
        printf("trojuhelnik je neplany\n");
        return 1;
    }

    if (x == y || x == z || z == y) {
        printf("- je rovnoramenny\n");
    } else {
        printf("- neni rovnoramenny\n");
    }

    if (x == y && x == z && y == z) {
        printf("- je rovnostrannny\n");
    } else {
        printf("- neni rovnostrannny\n");
    }

    if (x * x + y * y == z * z) {
        printf("- je pravouhly (S = %.2f)\n", x * y / 2.0);

        printf("- prepona je '%d', odvesny jsou '%d' a '%d'\n", z, y, x);
    } else {
        printf("- neni pravouhly\n");

        if (x * x + y * y > z * z) {
            printf("- je ostrouhly\n");
        } else {
            printf("- je tupouhly\n");
        }
    }

    return 0;
}
