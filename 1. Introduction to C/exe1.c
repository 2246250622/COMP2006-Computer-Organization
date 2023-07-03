#include <stdio.h>
int main()
{
    float radius = 7.5f;
    double pi = 3.14159265359;
    char circle = 'A';
    printf("The radius of Circle %c is %.2f\n", circle, radius);
    printf("The area of Circle %c is %.2f\n", circle, radius * radius * pi);
    printf("The circumference of Circle %c is %.2f\n", circle, radius * 2 * pi);
    return 0;
}