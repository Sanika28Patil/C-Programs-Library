#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Writing to a file
    fp = fopen("example.txt", "w"); // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fp, "Hello, this is a file I/O example in C.\n");
    fclose(fp);

    // Reading from a file
    fp = fopen("example.txt", "r"); // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("File content:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }
    fclose(fp);

    return 0;
}
