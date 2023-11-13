#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_LENGTH 4

int main() {
    char p[MIN_LENGTH + 1], P[MIN_LENGTH + 1];  // +1 for the null terminator

    do {
        printf("Enter the password (exactly %d characters): ", MIN_LENGTH);
        scanf("%s", p);

        if (strlen(p) != MIN_LENGTH) {
            printf("Password must be exactly %d characters.\n", MIN_LENGTH);
        }

    } while (strlen(p) != MIN_LENGTH);

    while(strcmp(p, P) != 0) {
        printf("Enter the password again to confirm: ");
        scanf("%s", P);

        if (strcmp(p, P) != 0) {
            printf("Passwords do not match. Try again.\n");
        }
    }

    printf("Password confirmed. Access granted.\n");

    return 0;
}
