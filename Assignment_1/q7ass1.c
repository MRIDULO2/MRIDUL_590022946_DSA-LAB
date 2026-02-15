// 7. Write a menu-driven C program using structure and dynamic memory allocation
// to add, display, delete records and free memory before exit.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student *s = NULL;
    int choice, count = 0;

    do {
        printf("\n1. Add Record\n2. Display Records\n3. Delete All Records\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            count++;
            s = realloc(s, count * sizeof(struct Student));

            printf("Enter roll: ");
            scanf("%d", &s[count - 1].roll);

            printf("Enter name: ");
            scanf("%s", s[count - 1].name);
            break;

        case 2:
            for (int i = 0; i < count; i++) {
                printf("Roll: %d, Name: %s\n", s[i].roll, s[i].name);
            }
            break;

        case 3:
            free(s);
            s = NULL;
            count = 0;
            printf("All records deleted\n");
            break;

        case 4:
            free(s);
            printf("Memory freed. Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
