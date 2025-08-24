#include <stdio.h>
int main()
{
    int age = 22;
    printf("My age is %d\n", age);

    char firstNameCharacter = 'A';
    printf("My firstNameCharacter is %c\n", firstNameCharacter);

    char name[50] = "Aditya Khandade";
    printf("Size of character is %ld\n", sizeof(char));
    printf("My name is %s\n", name);
    printf("Length is : %ld\n", sizeof(name));    // 50
    printf("Length is : %ld\n", 5 * sizeof(int)); // 20

    return 0;
}