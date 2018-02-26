#include <stdio.h>    
#include <math.h>    
#include <string.h>    
#define yz 1e-9  
double hs(double a,char *c)  
{          
    double k=1.0;    
    if(strcmp(c,"meters")==0)k=100.0;    
    if(strcmp(c,"cubits")==0)k=45.72;    
    if(strcmp(c,"feet")==0)k=30.48;    
    if(strcmp(c,"inches")==0)k=2.54;    
    a=a*k;    
    return a;          
}  
int main()    
{             
    double length,width,height;    
    double b[2]={0.0,0.0};    
    char dlength[20],dwidth[20],dheight[20];    
    while(scanf("%lf",&length)!=EOF)    
    {    
        scanf("%s",dlength);    
        scanf("%lf",&width);    
        scanf("%s",dwidth);    
        scanf("%lf",&height);  
        scanf("%s",dheight);    
        b[0]=hs(length,dlength);    
        b[1]=hs(width,dwidth);    
        if(fabs((b[0]-b[1]))<yz) printf("Spin\n");    
        else{    
            if(fabs((b[0]-6*b[1]))<yz) printf("Excellent\n");    
            else printf("Neither\n");  
        }    
        printf("\n");  
    }  
    return 0;  
}    


