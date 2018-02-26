#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
return b==0?a:GCD(b,a%b);
}
int main(){
	short (*p)[10000]=(short (*)[10000])malloc(sizeof(short (*)[10000])*100);
	//int (*p)[3]= ( int (*)[3])malloc(5);
	for(int i=0;i<100;++i)
	cout<<p[i]<<endl;
	return 0;
	/*int a[5]={4,4,4,4};
	a[1]={};
	for(int i=0;i<5;++i)
	cout<<
	return 0;*/
	int num[100001]={};	
	for(int i=2;i<100001;++i)
		if(num[i]!=1)
			for(int j=2;i*j<100001;++j)
				{
				num[j*i]=1;
				//c++;	
				}
	int c=1;
	for(int i=2;i<100001;++i){
		if(num[i]==0) num[i]=c++;
		else num[i]=0;
	}
	
		//return 0;
	
	int n,m,l,r,x;	
	/*cin>>n>>m;
	int* A=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;++i){
		cin>>A[i];
	
	
	}
	*/
	n=100;
	short (*B)[10000]=(short (*)[10000])malloc(sizeof(short (*)[10000])*n);
	for(int i=0;i<n;++i)
		for(int j=0;j<10000;++j)
			B[i][j]=0;
	cout<<B[23][55];
	/*
	cout<<c; 
	
	int c=0;
	for(int i=2;i<100001;++i)
		for(int j=2;j*j<100001;++j)
			++c;
	cout<<c;*/
}
int main1(){
	int n,m,l,r,x;	
	cin>>n>>m;
	int* A=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;++i){
		cin>>A[i];
	}
	for(int i=0;i<m;++i){
		int ap=-1;
		cin>>l>>r>>x;
		for(int j=l-1;j<r;++j){
			if(GCD(A[j],x)==1)
				if(A[j]>ap)
					ap=A[j];
		}
		cout<<ap<<endl;
	}
	return 0;
	
}
