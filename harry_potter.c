#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n1,sum;
    scanf("%d",&n1);
    if(n1<0)
           n1=n1*-1;
    sum=(n1/1000)+(n1%10);
        printf("%d",sum);
    return 0;
}
