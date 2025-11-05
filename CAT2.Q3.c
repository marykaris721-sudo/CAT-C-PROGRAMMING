/*
Name:Mary Wanjiru Kariuki
Reg No:CT100/G/25276/24
Description:a file program 
*/
#include <stdio.h>
#include <stdlib.h>

// Function to get 10 integers from user and write to "input.txt"
void writeInputFile() {
    FILE *fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        perror("Error opening input.txt");
        return;
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }

    fclose(fptr);
}

// Function to read from "input.txt", compute sum and average, and write to "output.txt"
void processInputFile() {
    FILE *fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        perror("Error opening input.txt");
        return;
    }

    FILE *outptr = fopen("output.txt", "w");
    if (outptr == NULL) {
        perror("Error opening output.txt");
        fclose(fptr);
        return;
    }

    int num, sum = 0, count = 0;
    while (fscanf(fptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    double average = count ? (double)sum / count : 0;
    fprintf(outptr, "Sum: %d\nAverage: %.2f\n", sum, average);

    fclose(fptr);
    fclose(outptr);
}

// Function to display contents of both files
void displayFiles() {
    char ch;

    printf("\nContents of input.txt:\n");
    FILE *fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        perror("Error opening input.txt");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);

    printf("\nContents of output.txt:\n");
    FILE *outptr = fopen("output.txt", "r");
    if (outptr == NULL) {
        perror("Error opening output.txt");
        return;
    }
    while ((ch = fgetc(outptr)) != EOF)
        putchar(ch);
    fclose(outptr);
}

int main() {
    writeInputFile();
    processInputFile();
    displayFiles();
    return 0;

}
