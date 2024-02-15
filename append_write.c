#include <stdio.h>

int main()
 {
    FILE *fp = fopen("data.txt", "a");

    fprintf(fp, "Header data:\n");
    fprintf(fp, "Name: John Doe\n");
    fprintf(fp, "Age: 30\n");
    fprintf(fp, "color: fair");
    printf("task has done");
    fclose(fp);
 }
