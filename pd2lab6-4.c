#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[10], str2[10];
    char *birlesmis;

    printf("Ilk stringi giriniz: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Ikýnci stringi giriniz: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    birlesmis = (char *)malloc(strlen(str1) + strlen(str2) + 1);

    if (birlesmis == NULL) {
        printf("bellekte yer yok.\n");
        return 1;
    }

    strcpy(birlesmis, str1);

    strcat(birlesmis, str2);


    printf("Birlesmis string: %s\n", birlesmis);

    return 0;
}

