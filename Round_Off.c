#include <stdio.h>
#include <math.h>

int main() {
    float inputValue;
    

    scanf("%f", &inputValue);
    
    int integerPart = (int)inputValue;
    int roundedUpValue = (int)ceil(inputValue);
    int roundedDownValue = (int)floor(inputValue);
    
    // Print the results
    printf("%d\n", integerPart);
    printf("%d\n", roundedUpValue);
    printf("%d\n", roundedDownValue);

    return 0;
}
