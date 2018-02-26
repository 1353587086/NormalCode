#include<iostream>
#include<malloc.h>
using namespace std;
#define LEN sizeof(struct doublenode)  

struct doublenode{
	doublenode* next;
	doublenode* pre;
	int value;
};
int main(){
	doublenode s;
	doublenode *p1;
	doublenode *p2;
	p1=&s;
	int i=0;
	for(i=0;i<10;++i){
		
		p2=(doublenode*)malloc(LEN);
		p2->next=p2->pre=NULL;
		p2->value=0;
		p1->next=p2;
		p2->pre=p1;
		p1->value=i;
		p1=p2;
	}
	//p1=&s;
	while(p1!=NULL){
		cout<<p1->value<<endl;
		p1=p1->pre;
		
	}
	
} 
