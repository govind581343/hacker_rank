#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b,c,p,s,r,t;
    scanf("%d %d %d",&a,&b,&c);
    p=a*b;
    s=a*c;
    r=p-s;
    t=r-100;
    printf("%d",t);
    return 0;
}
