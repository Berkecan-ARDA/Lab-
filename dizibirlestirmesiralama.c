#include <stdio.h>
#include <stdlib.h>


int *dizileribirlestir( int [], int, int [], int );

int main ( void )
{

	int i;
	int arr_1[5] = {6, 12, 15, 18, 24};
	int arr_2[7] = {1, 5, 7, 11, 14, 16, 25};
	int *ptr;
	
	ptr = dizileribirlestir( arr_1, 5, arr_2 ,7);
		for(i=0;i<12;i++)
        printf ( "%d", ptr[i] );
    printf ("\n");

}
int *dizileribirlestir( int arr_1[], int boyut_1, int arr_2[],int boyut_2)
{
	int *ptr = (int *)calloc(boyut_1+boyut_2, sizeof(int));
	int i,k;
	for(i=0;i<boyut_1;i++)
		ptr[i]=arr_1[i];
	for(k=0;k<boyut_2;i++,k++){
		ptr[i]=arr_2[k];
		
	}
return ptr;	
	int temp;
	for (int j=0; j<13;j++){
		for(int i=0;i<13;i++)	{
			if(ptr[i]<ptr[i+1]){
				temp=ptr[i];
				ptr[i]=ptr[i+1];
				ptr[i+1]=temp;
			}
		}
		
		
	}
	for(int z=0;z<12;z++){
		printf("%d",ptr[i]);
		
		
	}
	
}














