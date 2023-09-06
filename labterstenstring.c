#include <string.h>

void printReverse(const char *str) {
    const char *ptr = str + strlen(str) - 1; // Point to the last character

    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets("input, sizeof(input)", stdin);
    
    // Remove the newline character from input
    input[strcspn(input, "\n")] = '\0';

    printf("Reversed string: ");
    printReverse(input);

    return 0;
}
