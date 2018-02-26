#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
using namespace std;

int A[5000]={},B[5000]={};
int Check(int len){
	int t=-1,min=A[0];
	for(int i=0;i<len;++i)
		if(A[i]!=B[i]&&A[i]<=min){
			min=A[i]; 
			t=i;
		}
	return t;
}

int Min(int n){
	int min=A[0],t=0;
	for(int i=1;i<n;++i)
		if(A[i]<min){
			t=i;
			min=A[i];
		}
	return i;
}
int Find(int a,int n){
	for(int i=0;i<n;++i)
		if(A[i]==a)
			return i;
	return -1;
}
int Count(int n){
	int C[n],c=0;
	for(int i=0;i<n;++i)
		C[i]=A[i];
	for(int i=0;i<n;++i){
		if(C[i]!=B[i]){
			int t=A[Find(C[i])];
			
		}
	}
		
		
}
int main(){
	int n,k,sum;
	while(cin>>n&&n!=0){
		sum=0;
		for(int i=0;i<n;++i)
			cin>>A[i];
		for(int i=0;i<n;++i)
			cin>>B[i];
		while(Check(n)!=-1){
			k=Check(n);
			int temp=A[k];
			int tempi=Find(B[k],n);
			A[k]=A[tempi];
			A[tempi]=temp;
			sum+=(A[k]+temp);
		}
		cout<<sum<<endl;
	}
}

