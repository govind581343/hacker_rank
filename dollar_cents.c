#include <stdio.h>

int main() {
    int dollar1, cent1, dollar2, cent2;
    int totalDollars, totalCents;
    scanf("%d %d", &dollar1, &cent1);
    scanf("%d %d", &dollar2, &cent2);

    totalCents = cent1 + cent2;
    totalDollars = dollar1 + dollar2;
    if (totalCents >= 100) {
        totalDollars += totalCents / 100;
        totalCents = totalCents % 100;
    }
    printf("%d\n%d\n", totalDollars, totalCents);

    return 0;
}
