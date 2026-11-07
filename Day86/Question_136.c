/*
 * Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 * Category: Enum
 */
#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char input[16];
    int left, right;
    enum Operation operation;
    if (scanf("%15s%d%d", input, &left, &right) != 3) return 1;
    if (strcmp(input, "ADD") == 0) operation = ADD;
    else if (strcmp(input, "SUBTRACT") == 0) operation = SUBTRACT;
    else if (strcmp(input, "MULTIPLY") == 0) operation = MULTIPLY;
    else return 1;
    switch (operation) {
        case ADD: printf("%d\n", left + right); break;
        case SUBTRACT: printf("%d\n", left - right); break;
        case MULTIPLY: printf("%d\n", left * right); break;
    }
    return 0;
}
