#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME 50
#define MAX_CLASS 20
#define MAX_GRADES 4


typedef struct {
    int roll_number;
    char name[MAX_NAME];
    char class_name[MAX_CLASS];
    char grades[MAX_GRADES];
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;


void add_student() {
    if (student_count >= MAX_STUDENTS) {
        printf("Cannot add more students, limit reached.\n");
        return;
    }
    printf("Enter roll number: ");
    scanf("%d", &students[student_count].roll_number);

    getchar();

    printf("Enter name: ");
    gets(students[student_count].name);
    printf("Enter class: ");
    gets(students[student_count].class_name);

    printf("Enter grades: ");
    gets(students[student_count].grades);

    student_count++;
    printf("Student added successfully.\n");
}


void display_students() {
    if (student_count == 0) {
        printf("No student records available.\n");
        return;
    }
    for (int i = 0; i < student_count; i++) {
        printf("   Name: %s\n   Roll Number: %d\n   Class: %s, CGPA: %s\n",
            students[i].name, students[i].roll_number,
            students[i].class_name, students[i].grades);
    }
}


void search_student() {
    int roll_number;
    printf("Enter roll number to search: ");
    scanf("%d", &roll_number);

    for (int i = 0; i < student_count; i++) {
        if (students[i].roll_number == roll_number) {
            printf("Student found:\n   Name: %s\n   Class: %s, CGPA: %s\n",
                   students[i].name, students[i].class_name, students[i].grades);
            return;
        }
    }
    printf("Student not found.\n");
}


void edit_student() {
    int roll_number;
    printf("Enter roll number to edit: ");
    scanf("%d", &roll_number);

    getchar();

    for (int i = 0; i < student_count; i++) {
        if (students[i].roll_number == roll_number) {
            printf("Enter new name: ");
            gets(students[i].name);
            printf("Enter new class: ");
            gets(students[i].class_name);
            printf("Enter new grades: ");
            gets(students[i].grades);
            printf("Student record updated.\n");
            return;
        }
    }
    printf("Student not found.\n");
}


void delete_student() {
    int roll_number;
    printf("Enter roll number to delete: ");
    scanf("%d", &roll_number);

    for (int i = 0; i < student_count; i++) {
        if (students[i].roll_number == roll_number) {
            for (int j = i; j < student_count - 1; j++) {
                students[j] = students[j + 1];
            }
            student_count--;
            printf("Student record deleted.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    int choice;
    printf("\nWelcome to Green University of Bangladesh\n");
    while (1) {
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Edit Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_student();
            break;
            case 2: display_students();
            break;
            case 3: search_student();
            break;
            case 4: edit_student();
            break;
            case 5: delete_student();
            break;
            case 6: return 0;
            default: printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
