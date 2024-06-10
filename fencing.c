#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b,p,ar;
    scanf("%d %d",&a,&b);
    ar=a*b;
    p=2*(a+b);
    printf("The required length is %d m\n",p);
    printf("The required area of carpet is %d sqm",ar);
    return 0;
}
