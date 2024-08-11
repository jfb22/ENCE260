#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint64_t id;
    uint8_t age;
    float gpa;
} Student_t;

Student_t newStudent(uint64_t id, uint8_t age, float gpa)
{
    Student_t newStudent = {id, age, gpa};
    return newStudent;
}

void printStudent(const Student_t* student)
{
    printf("%llu: Age %d, GPA %.2f\n", student->id, student->age, student->gpa);
}

void updateGpa(Student_t* student, float newGpa)
{
    student -> gpa = newGpa;
}

int main(void)
{
    Student_t student = newStudent(12345678, 19, 5.62);
    printStudent(&student);
    updateGpa(&student, 6.2);
    printStudent(&student);
    return 0;
}