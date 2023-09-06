#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *isimsoyisim;
    char isim[] = "Berkecan";
    char soyisim[] = "Arda";

    
    int gereklialan = strlen(isim) + strlen(soyisim); 

    
    isimsoyisim = (char *)malloc(gereklialan +2);
    if (isimsoyisim == NULL) {
        printf("Bellekte yeterli alan yok.\n");
        return 1; 
    }

    strcpy(isimsoyisim, isim);
    strcat(isimsoyisim, " ");
    strcat(isimsoyisim, soyisim);

    
    printf("Isim Soyisim: %s\n", isimsoyisim);

    free(isimsoyisim);

	return 0;
}

