/*
 * Define a struct with enum Gender and print person's gender.
 * Category: Enum
 */
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };
struct Person { enum Gender gender; };

int main(void) {
    char input[32];
    struct Person person;
    if (scanf("Gender=%31s", input) != 1) return 1;
    if (strcmp(input, "MALE") == 0) person.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0) person.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0) person.gender = OTHER;
    else return 1;
    static const char *labels[] = {"Male", "Female", "Other"};
    puts(labels[person.gender]);
    return 0;
}
