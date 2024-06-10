#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[10],b[10],i,j,sum1=0,sum2=0;
for(i=0;i<8;i++)
     scanf("%d",&a[i]);
for(j=0;j<8;j++)
     scanf("%d",&b[j]);
 for(i=0;i<8;i++)
 {
     if(a[i]=='\0')
         break;
     sum1 =sum1+a[i];
 }
  
  for(j=0;j<8;j++)
    {
        if(a[j]=='\0')
         break;
       sum2 =sum2+b[j];
    }

    if(i==j && sum1==sum2)
        printf("same");
    else
        printf("Not Same");

return 0;
}
