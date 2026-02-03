
/*Q1) Suppose there are 20 students in a class. Each student has 2 subjects.
    Enter the marks of each student (maximum 100 in each subject) and store them
    in a 2D array of size 20×3, where the columns represent:
    Subject 1, Subject 2, and Total.
    Display the array and show the total marks of each student out of 200.*/

    #include <stdio.h>

int main()
{
    int a[20][3] ,i;

    for(i=0; i<20; i++)
    {
        printf("Enter marks for Student %d\n", i + 1);

        do 
        {
            printf("Subject 1: ");
            scanf("%d", &a[i][0]);
        } while(a[i][0] < 0 || a[i][0] > 100);

        do 
        {
            printf("Subject 2: ");
            scanf("%d", &a[i][1]);
        } while(a[i][1] < 0 || a[i][1] > 100);

        a[i][2] = a[i][0] + a[i][1];
    }

    printf("\n\nTable of Marks:\n");
    printf("\nStudent\t\tSub1\tSub2\tTotal(/200)\n");

    for(i = 0; i < 20; i++)
    {
        printf("STUDENT%d\t%d\t%d\t%d\n",
               i + 1, a[i][0], a[i][1], a[i][2]);
    }

    return 0;
}

