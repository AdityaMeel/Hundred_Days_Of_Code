/*
 * Print all enum names and integer values using a loop.
 * Category: Enum
 */
#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main(void) {
    static const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (int color = RED; color <= GREEN; ++color)
        printf("%s=%d\n", names[color], color);
    return 0;
}
