#include <stdio.h>
#include <stdlib.h>
//Klavyeden -1 girilene kadar tek say�lar� SLL in ba��na verilen �ift say�lar� sonuna ekleyen c dili kod
struct node{
	int number;
	struck node* next;
};
struct node* BasaEkleme(strcut node* head,int num){
	struct node* newNode =(strcut node*)malloc(size of(struct node));
	newNode->number=num;
	newNode->head;
	return newNode;
}
struct node* SonaEkleme(strcut node* head,int num){
	struct node* newNode =(strcut node*)malloc(size of(struct node));
	newNode->number=num;
	newNode->NULL;
	return newNode;
}
int main(){
	printf("Sayi Giriniz(Durmak i�in -1 girin)");
	while(1){
		scanf("%d",&num);
		if(num==-1);
			break;
	}
	if(num %2==1){
		head=BasaEkleme(head,num);
	}else{
		head=SonaEkleme(head,num);
	}
}
printf 


