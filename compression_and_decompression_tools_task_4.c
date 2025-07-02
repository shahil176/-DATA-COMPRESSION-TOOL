#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(const char *filename) {
    FILE *f = fopen(filename, "w");
    if (!f) {
        printf("Cannot create file.\n");
        return;
    }

    char text[1000];
    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    // Remove newline character if present
    size_t len = strlen(text);
    if (text[len - 1] == '\n')
        text[len - 1] = '\0';

    fputs(text, f);
    fclose(f);
    printf("File created and data written successfully.\n");
}

void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (!in || !out) {
        printf("File error during compression.\n");
        return;
    }

    char curr, prev;
    int count;

    prev = fgetc(in);
    if (prev == EOF) {
        printf("Input file is empty.\n");
        fclose(in);
        fclose(out);
        return;
    }

    count = 1;

    while ((curr = fgetc(in)) != EOF) {
        if (curr == prev) {
            count++;
        } else {
            fprintf(out, "%c%d", prev, count);
            prev = curr;
            count = 1;
        }
    }

    // Final character group
    fprintf(out, "%c%d", prev, count);

    fclose(in);
    fclose(out);
    printf("Compression complete. Output saved in '%s'\n", outputFile);
}

int main() {
    char inputFile[] = "example.txt";
    char outputFile[] = "compressed.txt";

    fflush(stdin); // 🛡 prevent leftover input
    createFile(inputFile);
    compressFile(inputFile, outputFile);

    return 0;
}