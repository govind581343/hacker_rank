#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float p,r,t,i,am,ds,fs;
    scanf("%f %f %f",&p,&r,&t);
    i=(p*t*r)/100;
    am=i+p;
    ds=i*0.02f;
    fs=am-ds;
    printf("%.2f\n",i);
    printf("%.2f\n",am);
    printf("%.2f\n",ds);
    printf("%.2f\n",fs);
    return 0;
}
