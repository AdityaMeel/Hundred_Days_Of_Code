/* Problem summary: Calculate the area and circumference of a circle. */
#include <stdio.h>
int main(void) { double r; if (scanf("%lf", &r) != 1) return 1; const double pi = 3.141592653589793; printf("Area=%.2f, Circumference=%.2f\n", pi*r*r, 2*pi*r); return 0; }
