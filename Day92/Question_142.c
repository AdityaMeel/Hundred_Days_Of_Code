/*
 * Store details of 5 students in an array of structures and print all.
 * Category: Enum
 */
#include <stdio.h>

struct Student { char name[50]; int roll_no; double marks; };

int main(void) {
    struct Student students[5];
    for (int i = 0; i < 5; ++i)
        if (scanf("%49s%d%lf", students[i].name, &students[i].roll_no, &students[i].marks) != 3) return 1;
    puts("Name | Roll | Marks");
    for (int i = 0; i < 5; ++i)
        printf("%s | %d | %.0f\n", students[i].name, students[i].roll_no, students[i].marks);
    return 0;
}
