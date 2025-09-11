#include <stdio.h>


struct Employee {
    int id;
    char name[50];
    float salary;
};


void inputEmployees(struct Employee *emp, int n);
void displayEmployees(struct Employee *emp, int n);

int main() {
    int n;

    printf("Enter number of employees: \n");
    scanf("%d", &n);
    struct Employee employees[n];
    printf("Enter Choice\n");
    printf("1.To input an element\n");
    printf("2.To display an element\n");
    printf("\n");
    printf("Enter Choice\n");

    inputEmployees(employees, n);


    displayEmployees(employees, n);

    return 0;
}


void inputEmployees(struct Employee *emp, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(emp + i)->id);
        printf("Name: ");
        scanf("%s", (emp + i)->name);
        printf("Salary: ");
        scanf("%f", &(emp + i)->salary);
    }
}


void displayEmployees(struct Employee *emp, int n) {
    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", (emp + i)->id);
        printf("Name: %s\n", (emp + i)->name);
        printf("Salary: %.2f\n", (emp + i)->salary);
    }
}

