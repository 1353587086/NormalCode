#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct DCNode
{
	char data;
	struct DCNode *prior;
	struct DCNode *next;
 } DCLinkList;
 
 void CreateList(DCLinkList **L,char a[], int n)
 {
 	DCLinkList *s;
 	int i;
 	*L = (DCLinkList *)malloc(sizeof(DCLinkList));
 	(*L)->next=NULL;
 	for(i=0;i<n;++i){
 		s=(DCLinkList *)malloc(sizeof (DCLinkList));
 		s->data=a[i];
 		s->next=(*L)->next;
 		(*L)->next=s;
	 }
 }
 int main()
 {
 	char a[]="ABCDEFG";
 	DCLinkList *head,*now;
 	head=NULL;
 	CreateList(&head,a,7);
 	now=head->next;
 	
	 
 	while(now!=NULL){
	 printf("%c",now->data);
 	now=now->next;
	 }
 }
