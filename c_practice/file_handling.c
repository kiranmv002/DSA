
int main() {
    FILE *fptr;
    char name[50];
    int marks;

    fptr = fopen("student.txt", "w");

    printf("Enter name and marks: ");
    scanf("%s %d", name, &marks);

    fprintf(fptr, "%s %d", name, marks);
    fclose(fptr);

    fptr = fopen("student.txt", "r");
    fscanf(fptr, "%s %d", name, &marks);

    printf("From file: %s %d\n", name, marks);
    fclose(fptr);

    return 0;
}
