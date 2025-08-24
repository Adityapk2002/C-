#include <stdio.h>
#include <string.h>

int main()
{
    // int age;
    // printf("Tell me your age\n");
    // scanf("%d", &age);
    // printf("Your age is %d\n", age);

    // double cgpa;
    // printf("Tell me your cgpa\n");
    // scanf("%lf", &cgpa);
    // printf("Your cgpa is %lf\n", cgpa);

    // char name[20];
    // printf("Tell me your name\n");
    // scanf("%s", name);
    // printf("Your name is %s\n", name); // if i tell aditya khandade it will just print aditya to get full name use fget

    char name1[20];
    printf("Tell me your name\n");
    fgets(name1, sizeof(name1), stdin);
    // remove newline character if present
    name1[strcspn(name1, "\n")] = '\0';
    printf("Your name is %s\n", name1);
    return 0;
}