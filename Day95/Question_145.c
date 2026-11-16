/*
 * Return a structure containing top student's details from a function.
 * Category: Enum
 */
#include <stdio.h>
#include <string.h>

struct Student { char name[50]; int roll_no; int marks; };

static struct Student top_student(struct Student students[], int count) {
    struct Student top = students[0];
    for (int i = 1; i < count; ++i)
        if (students[i].marks > top.marks) top = students[i];
    return top;
}

int main(void) {
    char line[512], *token;
    struct Student students[20], top;
    int count;
    if (!fgets(line, sizeof line, stdin)) return 1;
    for (size_t i = 0; line[i] != '\0'; ++i)
        if (line[i] == ',' || line[i] == ':' || line[i] == '(' || line[i] == ')') line[i] = ' ';
    token = strtok(line, " \t\r\n");
    if (!token || sscanf(token, "%d", &count) != 1 || count < 1 || count > 20) return 1;
    token = strtok(NULL, " \t\r\n");
    if (token && strcmp(token, "students") != 0) return 1;
    for (int i = 0; i < count; ++i) {
        token = strtok(NULL, " \t\r\n"); if (!token) return 1;
        snprintf(students[i].name, sizeof students[i].name, "%s", token);
        token = strtok(NULL, " \t\r\n"); if (!token || sscanf(token, "%d", &students[i].roll_no) != 1) return 1;
        token = strtok(NULL, " \t\r\n"); if (!token || sscanf(token, "%d", &students[i].marks) != 1) return 1;
    }
    top = top_student(students, count);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
