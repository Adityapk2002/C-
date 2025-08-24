#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

double div(int a, int b)
{
    return (double)a / b;
}

int main()
{
    printf("Sum of %d + %d is %d\n", 5, 4, sum(5, 4));
    printf("Div of %d / %d is %f\n", 10, 3, div(10, 3));
    return 0;
}