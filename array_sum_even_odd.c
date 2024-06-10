#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int n1,a[6],sum1=0,sum2=0,i;
    scanf("%d",&n1);
    for(i=0;i<=n1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n1;i++)
    {
        if(a[i]%2==0)
            sum1 += a[i];
        else
            sum2 += a[i];
    }
    printf("The sum of the even numbers in the array is %d\n",sum1);
    printf("The sum of the odd numbers in the array is %d",sum2);
    return 0;
}
