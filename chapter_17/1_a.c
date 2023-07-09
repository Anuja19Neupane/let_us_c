// create a structure to specify data on students given below:
// Roll number, Name, Department, course,year of joining 

// Assume that there are not more than 450 students in the college.
// 1. Write a function to print name of  students who joined in a particular year.
// 2. write a function to print the data of a student whose roll number is received by the function.

#include <stdio.h>

#define MAX_STUDENTS 450

struct Student {
    int Roll_number;
    char name[50];
    char department[50];
    int year_of_joining;
};

void printStudentsByYear(struct Student students[], int numStudents, int year) {
    int i;
    for (i = 0; i < numStudents; i++) {
        if (students[i].year_of_joining == year) {
            printf("Name: %s\n", students[i].name);
        }
    }
}

void printStudentData(struct Student students[], int numStudents, int rollNumber) {
    int i;
    for (i = 0; i < numStudents; i++) {
        if (students[i].Roll_number == rollNumber) {
            printf("Roll Number: %d\n", students[i].Roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", rollNumber);
}

int main() {
    struct Student students[MAX_STUDENTS] = {
        {101, "asmita karki", "Computer Science", 2020},
        {102, "manita shah", "Mechanical Engineering", 2021},
        {103, "jesi rai", "Electrical Engineering", 2020},
        // aba jati pani aru data thapda hunxa yaha
    };

    int numStudents = 3; //maile mathi 3 ota matra students ko detail lekho xu so 

    
    printf("Students who joined in 2020:\n");
    printStudentsByYear(students, numStudents, 2020); // yaha year 2020 xa, so year 2020 vako data haru print hunxa

    printf("\n");

   
    int rollNumber = 102;
    printf("Student data for Roll Number %d:\n", rollNumber);
    printStudentData(students, numStudents, rollNumber);

    return 0;
}
