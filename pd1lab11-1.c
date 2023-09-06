#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j,satir,sutun;
	
	printf("matrisin satir sayisini giriniz:  \n");
	scanf("%d",&satir);
	printf("matrisin sutun sayisini giriniz:  \n");
	scanf("%d",&sutun);
	
	int matris[satir][sutun],matris2[satir][sutun],sonuc[satir][sutun];
	
	printf("Ilk matrisin satirini giriniz: \n");
	for(i=0;i<satir;i++){
		scanf("%d",&matris[i]);
		
	}
	printf("Ilk matrisin sutununu giriniz:  \n");
	for(j=0;j<sutun;j++){
		scanf("%d",&matris[j]);
		sonuc[i][j]=matris[i][j];
	}
	
	printf("Ikinci matrisin satirini giriniz: \n");
	for(i=0;i<satir;i++){
		scanf("%d",&matris2[i]);
	}
	printf("Ikinci matrisin sutununu giriniz:  \n");
	for(j=0;j<sutun;j++){
		scanf("%d",&matris2[j]);
		sonuc[i][j]+= matris2[i][j];
	}
	printf("matris=[%d]",sonuc[i][j]);
}


