#include <stdio.h>
#include <string.h>

int main(void) {
    const char USERNAME[] = "admin";
    const char PASSWORD[] = "123";
    const int ATTEMPTS_CEIL = 3;

    char username_input[255];
    char password_input[255];

    printf("Username: ");
    scanf("%s", username_input);

    if (strcmp(username_input, USERNAME) == 0) {
        for (int i = 0; i < ATTEMPTS_CEIL; i++) {
            printf("Password: ");
            scanf("%s", password_input);

            if (strcmp(password_input, PASSWORD) == 0) {
                printf("You're logged in\n");
                return 0;
            } else {
                printf("Incorrect!!!\n");
            }
        }
        return 1;
    } else {
        printf("Invalid username: '%s'\n", username_input);
        return 1;
    }

    return 0;
}
