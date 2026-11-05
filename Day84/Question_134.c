/*
 * Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 * Category: Enum
 */
#include <stdio.h>
#include <string.h>

enum Result { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char input[16];
    enum Result result;
    if (scanf("%15s", input) != 1) return 1;
    if (strcmp(input, "SUCCESS") == 0) result = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) result = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) result = TIMEOUT;
    else return 1;
    switch (result) {
        case SUCCESS: puts("Operation succeeded"); break;
        case FAILURE: puts("Operation failed"); break;
        case TIMEOUT: puts("Operation timed out"); break;
    }
    return 0;
}
