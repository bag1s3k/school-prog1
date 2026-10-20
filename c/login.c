#include <stdio.h>
#include <string.h>

struct User {
    const char *name;
    char password[255];
};

int main(void) {
    const int ATTEMPTS_CEIL = 4;
    struct User users[] = {{"admin", "123"}, {"sysadmin", "321"}};
    char username_input[255];
    char password_input[255];

    printf("Username: ");
    scanf("%s", username_input);

    struct User *found_user = NULL;
    int users_count = sizeof(users) / sizeof(users[0]);

    for (int j = 0; j < users_count; j++) {
        if (strcmp(username_input, users[j].name) == 0) {
            found_user = &users[j];
        }
    }

    if (found_user == NULL) {
        printf("Invalid username: '%s'\n", username_input);
        return 1;
    }

    for (int i = 0; i < ATTEMPTS_CEIL; i++) {
        printf("Password: ");
        if (scanf("%s", password_input) != 1) {
            printf("Invalid Input!!!\n");
            return 1;
        }

        if (strcmp(password_input, found_user->password) == 0) {
            printf("You're logged in\n");
            return 0;
        } else {
            printf("Incorrect!!!\n");
        }
    }

    return 0;
}
