#include <iostream>
#include <string.h>
#include <stdio.h>

struct st_student
{
    char name[32];
    int age;
    float weight;
};

struct st_student students[100];

int main()
{
    strcpy(students[0].name, "John Smith");
    students[0].age = 25;
    students[0].weight = 68.5;

    strcpy(students[1].name, "Kate White");
    students[1].age = 27;
    students[1].weight = 55.2;

    std::cout << "Name:" << students[0].name << '\n';
    std::cout << "Age:" << students[0].age << '\n';
    std::cout << "Weight:" << students[0].weight << '\n';

    std::cout << "Name:" << students[1].name << '\n';
    std::cout << "Age:" << students[1].age << '\n';
    std::cout << "Weight:" << students[1].weight << '\n';
}
