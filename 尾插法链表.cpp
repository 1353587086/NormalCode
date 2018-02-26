#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
	int data;
	struct node* next;
}DC;

DC* Create(int a[],int n){
	DC *now,*tail,*head=NULL;
	int i=0;
	for(;i<n;++i){
	now=(DC*)malloc(sizeof(DC));
	now->data=a[i];
	now->next=head;
	head=now;
	}
	return (head);
}
int main(){
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	DC *b=Create(a,10);
	while(b!=NULL){
		printf("%d",b->data);
		b=b->next;
	}
}

