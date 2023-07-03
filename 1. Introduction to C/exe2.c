#include <stdio.h>
int main()
{
    char f1[] = "name";
    char f2[] = "size";
    char f3[] = "location";
    char v1[] = "appointment.xlsx";
    float v2 = 512332;
    char v3[] = "home/pi/Desktop/";

    printf("%8s : %s\n", f1, v1);
    printf("%8s : %.2f\n", f2, v2/1024);
    printf("%8s : %s\n", f3, v3);

    return 0;
}