#include <stdio.h>

int main()
{
    int x = -2;
    int y = -3;
    float z1 = x * x + y * y - (x * y) + 2;
    float z2 = (x - y) * (x -y) * (x - y) - 3;
    float z3 = (2 * x * x * x - 0.5 * x * x - x +4) / y;
    printf("%f\n", z1);
    printf("%f\n", z2);
    printf("%f\n", z3);

    return 0;
}






















