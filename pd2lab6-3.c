#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char *isim = (char *)malloc(1);
    
    if (isim == NULL) {
        printf("bellekte yer yok.\n");
        return 1;
    }
    
 
    strcpy(isim, "Berkecan\t");

    char *soyisim = "Arda";
    int gerekenalan = strlen(isim) + strlen(soyisim) ;
    isim = (char *)realloc(isim, gerekenalan);

    if (isim == NULL) {
        printf("bellekte yer yok.\n");
        return 1;
    }

   
    strcat(isim, soyisim);

    printf("Isim Soyisim: %s", isim);

   

    return 0;
}

