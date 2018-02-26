#include<iostream>
#include<malloc.h>
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}
using namespace std;
void reverserow(bool** A,int m,int n){
	for(int i=0;i<m;++i)
		A[i][n]-=1;
}
void reversecolumn(bool** A,int m,int n){
	for(int i=0;i<m;++i)
		A[m][i]-=1;
}
bool countrow(bool** A,int m,int n){
	int count=0;
	for(int i=0;i<m;++i)
		if(A[i][n]) count+=1;
		else count-=1;
	if(count<0) return false;
	else return true; 
	
}
bool countcolumn(bool** A,int m,int n){
	int count=0;
	for(int i=0;i<n;++i)
		if(A[m][i]) count+=1;
		else count-=1;
	if(count<0) return false;
	else return true; 	
}
 int main(){
 	int m,n;
 	cin>>m>>n;
 	bool** A =(bool**) malloc(sizeof(bool*)*m);
 	for(int i=0;i<m;++i)
 	A[i]=(bool*) malloc(sizeof(bool)*n);
 	for(int i=0;i<m;++i)
 	for(int j=0;j<n;++j)
	cin>>A[i][j]; 
	
	}
