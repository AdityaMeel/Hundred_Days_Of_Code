/*
 * Write a function that accepts a structure as parameter and prints its members.
 * Category: Enum
 */
#include <stdio.h>

struct Student { char name[50]; int roll_no; int marks; };

static void print_student(struct Student student) {
    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);
}

int main(void) {
    struct Student student;
    if (scanf("Student: %49s%d%d", student.name, &student.roll_no, &student.marks) != 3) return 1;
    print_student(student);
    return 0;
}
