#include <stdio.h>

int main() {
    char input[100], output[100];
    int i, j = 0;

    printf("Bir metin girin: ");
    gets(input); 

   
    for (i = 0; input[i] != '\0'; i++) {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            output[j] = input[i];
            j++;
        }
    }

    output[j] = '\0';

    printf("Duzenlenmis Metin: %s\n", output);

    return 0;
}

