/*
 * Create an enum for months and print how many days each month has.
 * Category: Enum
 */
#include <stdio.h>
#include <string.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void) {
    char input[16];
    static const char *names[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    static const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    enum Month month;
    if (scanf("%15s", input) != 1) return 1;
    for (int i = 0; i < 12; ++i) {
        if (strcmp(input, names[i]) == 0) {
            month = (enum Month)(i + 1);
            if (month == FEB) puts("28 or 29 days");
            else printf("%d days\n", days[month - 1]);
            return 0;
        }
    }
    return 1;
}
