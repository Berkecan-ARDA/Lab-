#include <stdio.h>
#include <stdlib.h>


int main() {
    char birinci[50], ikinci[50];

    printf("ilk kelimeyi girin: ");
    scanf("%s", birinci);

    printf("ikinci kelimeyi girin: ");
    scanf("%s", ikinci);

    strcat(birinci, ikinci);

    printf("Birlestirilmis hali: %s\n", birinci);

    return 0;
}

