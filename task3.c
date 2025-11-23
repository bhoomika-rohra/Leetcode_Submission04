#include <stdio.h>
#include <string.h>

struct Student {
    int age;
    char first_name[20];
    char last_name[20];
    int standard;
}; 

int main() {
    struct Student s;

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter first name: ");
    scanf("%s", s.first_name);

    printf("Enter last name: ");
    scanf("%s", s.last_name);

    printf("Enter standard: ");
    scanf("%d", &s.standard);

    printf("%d %s %s %d\n", s.age, s.first_name, s.last_name, s.standard);

    return 0;
}
