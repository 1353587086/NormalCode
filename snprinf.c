#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char daddr[16];

int main(int argc, char **argv)
{
    char buf[100];
    int x;
    x = 1;
    int y=2;
    int z=100;
    memset(daddr,'/0',16);
    printf("before format string x is %d/%#x (@ %p)%p\n", x, x, &y,&z);
    snprintf(buf,sizeof(buf),"qtyty%nssS%n");   //实施格式化字符串攻击

    buf[sizeof(buf)- 1] = 0;
    printf("after format string x is %d/%d (@ %p)\n", y, z, &x);
    return 0;
}
