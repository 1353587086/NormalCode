#include<stdio.h>  
//using namespace std;  

int main(void)  
{  
int A[1000]={};
int a,b;

	scanf("%d",&a);
	for(int i=0;i<a;++i){
		
	scanf("%d",&b);
		A[b]+=1;
	}
	for(int i=0;i<1000;++i){
		if(A[i]>0) 
	printf("%d ",i);
	}
	for(int i=0;i<1000;++i)
		A[i]=0;


} 
