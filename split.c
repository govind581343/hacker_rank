#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x,y,a,b;
    scanf("%d\n %d",&x,&y);
    a=x%y;
    b=x-a;
    x=x/y;
    y=x-b;
    printf("The number of friends in each team is %d and left out is %d",x,a);
    return 0;
}
