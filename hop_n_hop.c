#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x2,y2,a;
    scanf("%d\n %d",&x2,&y2);
    a=(x2-3)*(x2-3)+ (y2-4)*(y2-4);
    int b=sqrt(a);
    printf("%d",b);
    return 0;
}
