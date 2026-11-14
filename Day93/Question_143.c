/*
 * Find and print the student with the highest marks.
 * Category: Enum
 */
#include <stdio.h>
#include <string.h>

struct Student { char name[50]; int roll_no; int marks; };

int main(void) {
    char line[512], *token;
    struct Student student, top;
    int count;
    if (!fgets(line, sizeof line, stdin)) return 1;
    for (size_t i = 0; line[i] != '\0'; ++i)
        if (line[i] == ',' || line[i] == ':' || line[i] == '(' || line[i] == ')') line[i] = ' ';
    token = strtok(line, " \t\r\n");
    if (!token || sscanf(token, "%d", &count) != 1 || count < 1 || count > 20) return 1;
    token = strtok(NULL, " \t\r\n");
    if (token && strcmp(token, "students") != 0) return 1;
    for (int i = 0; i < count; ++i) {
        token = strtok(NULL, " \t\r\n");
        if (!token) return 1;
        snprintf(student.name, sizeof student.name, "%s", token);
        token = strtok(NULL, " \t\r\n"); if (!token || sscanf(token, "%d", &student.roll_no) != 1) return 1;
        token = strtok(NULL, " \t\r\n"); if (!token || sscanf(token, "%d", &student.marks) != 1) return 1;
        if (i == 0 || student.marks > top.marks) top = student;
    }
    printf("Topper: %s (Marks: %d)\n", top.name, top.marks);
    return 0;
}
