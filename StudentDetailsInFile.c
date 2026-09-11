#include <stdio.h>

int main() {
    FILE *fp;
    char name[20];
    int roll, marks, i;

    fp = fopen("students.txt", "w");

    for (i = 0; i < 3; i++) {
        printf("Enter name, roll number and marks:\n");
        scanf("%s %d %d", name, &roll, &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStudent Details:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}