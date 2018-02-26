#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;
unsigned long long int ksmm(unsigned long long int x,unsigned long long  int y,unsigned long long  int z) {

	if (y == 1) return x%z;
	unsigned long long int d = ksmm(x, y >> 1LL, z);
	//cout<<"d="<<d<<" y="<<(y&1ll)<<endl;
	return (y&1LL)?(unsigned long long int)d*d%z*x%z:(unsigned long long int)d*d%z;
}
unsigned long long int p(int a) {
    unsigned long long int b=1;
for(int i=0;i<a;++i) b*=10;
return b;
}
int main(){
//p*q62003*44017=2729186051
//ψn=2729080032
unsigned long long int n=2729186051;
unsigned long long int e=2345773;
unsigned long long int d= 422233957;
string A;
string B;
unsigned long long int a=0,b=0;
bool flag=0;
while(1){
    flag=0;
    cout<<"请输入十进制纯数字\n";
    cin>>A;
    for(int i=0;i<A.size();++i)
        if(A[i]>57||A[i]<48) {flag=1;break;}
    if(flag) cout<<"输入有误,";
    else break;
}
cout<<"加密结果为:"<<endl;
for(int j=0;j<A.size()/9;++j){
    for(int i=0;i<9;++i)
        a+=(A[j*9+i]-48)*p(8-i);
    cout<<ksmm(a,e,n)<<' ';
    a=0;
}
if(A.size()%9){
    for(int j=0;j<A.size()%9;++j)
        a+=(A[A.size()+j-A.size()%9]-48)*p(A.size()%9-j-1);
    cout<<ksmm(a,e,n);
}
cout<<endl;
getchar();

//解密
b=0;
while(1){
    flag=0;
    cout<<"请输入要解密的序列，用空格隔开\n";
    getline(cin,B,'\n');
    for(int i=0;i<B.size();++i)
    {
        if(B[i]==' ') continue;
        if(B[i]>57||B[i]<48) {flag=1;break;}
    }
    if(flag) cout<<"输入有误,";
    else break;
}
for(int j=0;j<B.size();++j){
        if(B[j]!=' ')
        {
            b*=10;
            b+=(B[j]-48);
        }
        if(B[j]==' ')
        {
            cout<<ksmm(b,d,n);
            b=0;
        }
}
cout<<ksmm(b,d,n);
b=0;
}
