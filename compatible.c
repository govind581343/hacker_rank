#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n1,n2,i,j;
    
    
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    
    scanf("%d",&n2);
    int b[n2];
    for(j=0;j<n2;j++)
        scanf("%d",&b[j]);
    
    if(n1!=n2)
        {
        printf("Incompatible");
        return 0;
        }
    
    for(i=0;i<n2;i++){
        if(a[i]<=b[i]){
            printf("Incompatible");
            return 0;

        }         
    }
   
    printf("Compatible");  
    return 0;
}
