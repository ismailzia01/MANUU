#include <stdio.h>
struct employee {
    int age;
    char *name;
    int salary;
};
int manager()
{
    struct employee manager;
    manager.age = 27;
    if(manager.age > 30)
    manager.salary = 60000;
    else
    manager.salary = 55000;
    return manager.salary;
}
int main()
{
    struct employee emp1;
    struct employee emp2;

    printf("Enter salary of first employee : ");
    scanf("%d", &emp1.salary);
    printf("Enter salary of second employee : ");
    scanf("%d", &emp2.salary);
    printf("Salary of first employee : %d", emp1.salary);
    printf("\nSalary of second employee : %d", emp2.salary);
    printf("\nSalary of manager : %d", manager());
    return 0;

}