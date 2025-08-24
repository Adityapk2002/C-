#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    printf("Sum of %d + %d is %d\n", 5, 4, sum(5, 4));
    printf("Div of %d / %d is %d\n", 10, 5, div(10, 5));
    return 0;
}