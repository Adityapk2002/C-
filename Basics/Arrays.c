#include <stdio.h>

int main()
{
    int evenNumbers[10] = {2, 4, 6, 8, 10};
    printf("%d\n", evenNumbers[2]);
    evenNumbers[1] = 18;
    printf("%d\n", evenNumbers[1]);

    char name[50] = "Aditya Khandade";
    printf("My name is %s\n", name);
    printf("1 letter is %c\n", name[1]);
    return 0;
}