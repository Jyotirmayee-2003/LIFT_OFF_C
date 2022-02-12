// C program to find R,D and A of a circle

#include <stdio.h>
int main()
{
    float R, D = 0, C = 0, A = 0;
    printf("Enter the radius of circle:");
    scanf("%f", &R);
    D = 2 * R;
    C = 2 * 3.14 * R;
    A = 3.14 * R * R;
    printf("The diameter of given circle is %f\n", D);
    printf("Circumference:%f\n", C);
    printf("Area:%f\n", A);
    return 0;
} 