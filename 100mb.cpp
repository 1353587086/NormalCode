#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out;
out.open("100kb.txt");
for(int i=0;i<100;++i)
    for(int j=0;j<1024;++j)
        //for(int k=0;k<1024;++k)
            out<<"A";
return 0;

}

