#include <stdio.h>
#include <stdlib.h>

void ogrencinumarasi(int ogrno, int *intArray, char *charArray) {
    int tekler = 0;
    int ciftler = 0;
    
    while (ogrno > 0) {
        int basamak = ogrno % 10;
        ogrno /= 10;
        
        if (basamak % 2 == 0) {
            charArray[ciftler] = basamak + '0'; 
            ciftler++;
        } else {
            intArray[tekler] = basamak;
            
            tekler++;
        }
    }
    
   
}


int main() {
	 
    

    int ogrno = 23456; 
    
    int *intArray = (int *)malloc(10 * sizeof(int)); 
    char *charArray = (char *)malloc(10 * sizeof(char)); 
    
    ogrencinumarasi(ogrno, intArray, charArray);
    
 
   
    printf("Tek sayilar: ");
     
    for (int i = 0; i < sizeof(intArray) / sizeof(intArray[0]); i++) {
        printf("%d ", intArray[i]);
    }
    
    
    printf("Ciftsayilar: ");
    for (int i = 0; i < sizeof(charArray); i++) {
        printf("%c ", charArray[i]);
    }
    printf("\n");
    
    free(intArray);
    free(charArray);
    
    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

void processStudentNumber(int studentNumber, int *intArray, char *charArray) {
    int oddCount = 0;
    int evenCount = 0;

    while (studentNumber > 0) {
        int digit = studentNumber % 10;
        studentNumber /= 10;

        if (digit % 2 == 0) {
            charArray[evenCount] = digit + '0'; // Convert int to char
            evenCount++;
        } else {
            intArray[oddCount] = digit;
            oddCount++;
        }
    }
}

int main() {
    int studentNumber = 123456; // Kendi ��renci numaran�zla de�i�tirin

    // Ba�lang�� boyutlar�yla int ve char dynamic array'leri olu�turun
    int *intArray = (int *)malloc(10 * sizeof(int));
    char *charArray = (char *)malloc(10 * sizeof(char));

    // Dynamic array'leri i�leyen fonksiyonu �a��r�n
    processStudentNumber(studentNumber, intArray, charArray);

    // Odd Numbers (Tek Say�lar) i�in intArray'i yazd�r�n
    printf("Odd Numbers: ");
    for (int i = 0; i < sizeof(intArray) / sizeof(intArray[0]); i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");

    // Even Numbers (�ift Say�lar) i�in charArray'i yazd�r�n
    printf("Even Numbers: ");
    for (int i = 0; i < sizeof(charArray) / sizeof(charArray[0]); i++) {
        printf("%c ", charArray[i]);
    }
    printf("\n");

    // Bellek s�z�nt�s�n� �nlemek i�in dynamic array'leri serbest b�rak�n
    free(intArray);
    free(charArray);

    return 0;
}
*/
