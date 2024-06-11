#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float x1,x2,y1,y2;
    scanf("%f\n %f\n %f\n %f\n",&x1,&y1,&x2,&y2);
    float a=(x1+x2)/2;
    float b=(y1+y2)/2;
    printf("Arun's house is located at(%.1f,%.1f)",a,b);
    return 0;
}
