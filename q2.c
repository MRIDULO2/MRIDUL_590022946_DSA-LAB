
/*Q2) Suppose there are 5 students in a class and each student has 5 subjects.
    Enter the marks of the students in a 2D array (maximum marks = 100 in each subject).
    Calculate and display the total marks and percentage of each student in
    tabular form.*/
    
#include <stdio.h>

int main(){
    int marks[5][5], i, j, total[5];
    float percentage[5];

    for(i=0; i<5; i++){
        printf("\nEnter marks for Student %d:\n", i+1);
        total[i] = 0;

        for(j=0; j<5; j++){
            printf("Subject %d: ", j+1);
            scanf("%d", &marks[i][j]);

            if(marks[i][j]<0 || marks[i][j]>100){
                printf("Invalid marks! Enter again.\n");
                j--;
                continue;
            }

            total[i] = total[i] + marks[i][j];
        }
        percentage[i] = total[i] / 5.0;
    }

    printf("\n\nResult:\n");
    printf("Student\t\tS1\tS2\tS3\tS4\tS5\tTotal\tPercentage\n");

    for(i = 0; i < 5; i++){
        printf("Student%d\t", i + 1);

        for(j = 0; j < 5; j++){
            printf("%d\t", marks[i][j]);
        }

        printf("%d\t%.2f%%\n", total[i], percentage[i]);
    }
    return 0;
}

