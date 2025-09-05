#include <stdio.h>

// Define student structure
struct Students {
    short int roll_no;
    short int age;
    long double marks1;
    long double marks2;
};

typedef struct Students std;

// Function prototypes
void InputStdData(std s[], int n);
void OutputStdData(std s[], int n);

void InputStdData(std s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Roll No: ");
        scanf("%hd", &s[i].roll_no);

        printf("Age: ");
        scanf("%hd", &s[i].age);

        printf("Marks in subject 1: ");
        scanf("%Lf", &s[i].marks1);

        printf("Marks in subject 2: ");
        scanf("%Lf", &s[i].marks2);
    }
}

void OutputStdData(std s[], int n) {
    printf("\n====== Student Details ======\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %hd\n", s[i].roll_no);
        printf("Age: %hd\n", s[i].age);
        printf("Marks1: %Lf\n", s[i].marks1);
        printf("Marks2: %Lf\n", s[i].marks2);
    }
}

int main() {
    int num;

    printf("Enter number of students: ");
    scanf("%d", &num);

    std students[num];  // array of students

    InputStdData(students, num);
    OutputStdData(students, num);

    return 0;
}

