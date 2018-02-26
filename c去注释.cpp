#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	char path[300]={};
	cin.getline(path,300);
	char path1[300]={};
	for(int i=1;i<strlen(path)-1;++i){
		//cout<<path[i]<<endl;
		path1[i-1]=path[i];
	}
	
	cout<<path1<<endl; 
	fstream file(path1);
	strncat(path1,".cpp",4);
	ofstream fileout(path1);
	if(!file) cout<<"error!" ;
	
	system("pause");
	
	char tmp[200];
	int i=0;
	int j=0;
	bool flag=0;
	while(!file.eof()){
		file.getline(tmp,200);
		for(;j<strlen(tmp);++j){
			if(tmp[j]!=' '&&tmp[j]!='\n'&&tmp[j]!='\t'&&tmp[j]!='/') 
				flag=1;			
			if (tmp[j]=='/')
				if(tmp[j+1]=='/'){
					tmp[j]='\0';
					cout<<"Done!"<<endl;
					break;
				}
		}
		j=0;
		if(!flag) cout<<"Thrown!"<<endl;
		if(flag)	
			fileout<<tmp<<endl;	
		flag=0;
		//cout<<i++<<' '<<tmp<<'!'<<endl;
		//system("pause");
	}
	file.close();
	fileout.close();
	return 0;
} 
