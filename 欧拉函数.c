#include<stdio.h>
#include<stdlib.h>
long long int eular(long long int n)
{
    long long int ret=1,i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            n/=i,ret*=i-1;
            while(n%i==0) n/=i,ret*=i;
        }
    }
    if(n>1) ret*=n-1;
    return ret;
}
long long int gcd(long long int a,long long int b) {
if (a%b!=0)
return gcd(b, a%b);
else
return b;
}

 int main ()
{
    long long int i=0;
    for(i=2345773;i<40000000;++i)
    if(gcd(i,2729080032)==1) {printf("%lld",i); return 0;}
      /*long long int n,s;
      scanf("%lld",&n);
      s=eular(n);
      printf("%lld",s);
      return 0;*/
printf("%lld",(1003*332903155)%4839157456); return 0;
printf("%d",4839157456%1003);
printf("/n%d",4839157456/1003);
printf("\n%d",-69*4839157456+332903155*1003);



          return 0;


}
