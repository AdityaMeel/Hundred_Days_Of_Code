/*
 * Create Employee structure with nested Date structure for joining date and print details.
 * Category: Enum
 */
#include <stdio.h>

struct Date { int day, month, year; };
struct Employee { char name[50]; int id; struct Date joining_date; };

int main(void) {
    struct Employee employee;
    if (scanf("Employee: %49s | ID: %d | Joining Date: %d%d%d", employee.name, &employee.id,
              &employee.joining_date.day, &employee.joining_date.month, &employee.joining_date.year) != 5) return 1;
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", employee.name, employee.id,
           employee.joining_date.day, employee.joining_date.month, employee.joining_date.year);
    return 0;
}
