#include<iostream>  
#include<algorithm>
using namespace std;  

int main(void)  
{  

int a,b,c=0,d=0;
int *A;
cin>>a;
for(int i=0;i<a;++i){
	cin>>b;
	A=(int *)malloc(sizeof(int)*b);
	for(int j=0;j<b;++j){
		cin>>c;
		A[j]=c;
	}
	cout<<"Case "<<i+1<<':'<<endl;
	for(int j=b-1;j>0;--j){
		A[j]=A[j]-A[j-1];
	}
	sort(A,A+b);
	for(int j=0;j<b;++j)
		cout<<A[j]<<' ';
	
	cout<<endl;
	if(i<a-1) cout<<endl;
	
}

} 
