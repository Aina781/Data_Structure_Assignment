#include <stdio.h>

/*
Group work by
    1) Aina Oluwatimilehin
    2) Kambere Elton Jesse
    3) Medhanie Eyob
    4) Niza
    5) Vrajni Dilip Halai
    */

// Structure to hold marks for each subject
struct SubjectMarks {
    float assignment;
    float coursework;
    float midTerm;
    float endTerm;
};

// Function to get a valid mark between 0 and 100
float getValidMark(const char* prompt) {
    float mark;
    while (1) {
        printf("%s", prompt);
        scanf("%f", &mark);
        
        // Check if input is valid (0-100)
        if (mark >= 0 && mark <= 100) {
            return mark;
        }
        printf("Invalid input! Enter a number between 0 and 100.\n");
        
        // Clear input buffer in case of non-numeric input
        while (getchar() != '\n');
    }
}

// Function to input marks for a subject
void getMarks(struct SubjectMarks marks, const char subjectName) {
    printf("\nEnter marks for %s:\n", subjectName);
    marks->assignment = getValidMark("Assignment (out of 100): ");
    marks->coursework = getValidMark("Coursework (out of 100): ");
    marks->midTerm = getValidMark("Mid-term Exam (out of 100): ");
    marks->endTerm = getValidMark("End-term Exam (out of 100): ");
}

// Function to calculate average for a subject
float calculateAverage(const struct SubjectMarks marks) {
    return (marks.assignment + marks.coursework + marks.midTerm + marks.endTerm) / 4.0f;
}

int main() {
    const int numSubjects = 3;
    char* subjects[] = {"Physics", "Chemistry", "Mathematics"};
    struct SubjectMarks marks[numSubjects];
    float totalAverage = 0;

    // Get marks for each subject
    for (int i = 0; i < numSubjects; i++) {
        getMarks(&marks[i], subjects[i]);
    }

    // Display results
    printf("\nResults:\n");
    for (int i = 0; i < numSubjects; i++) {
        float avg = calculateAverage(marks[i]);
        printf("%s Average: %.2f\n", subjects[i], avg);
        totalAverage += avg;
    }

    printf("Overall Average: %.2f\n", totalAverage / numSubjects);

    return 0;
}
