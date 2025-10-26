#include <stdio.h>

int main() {
    int students, subjects;
    printf("Enter number of students: ");
    scanf("%d", &students);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    int marks[students][subjects];
    int transpose[subjects][students];

   
    printf("\nEnter the marks for each student:\n");
    for (int i = 0; i < students; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < subjects; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

  
    printf("\nOriginal Marks Table (Students x Subjects):\n");
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            printf("%4d", marks[i][j]);
        }
        printf("\n");
    }

   
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            transpose[j][i] = marks[i][j];
        }
    }


    printf("\nTransposed Marks Table (Subjects x Students):\n");
    for (int i = 0; i < subjects; i++) {
        for (int j = 0; j < students; j++) {
            printf("%4d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}