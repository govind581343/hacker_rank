#include <stdio.h>

int main() {
    int tc, bep, bbp;
    int lbs, bbs, rc, ops;
    scanf("%d", &tc);
    scanf("%d", &bep);
    scanf("%d", &bbp);
    lbs = tc * bep / 100;
    rc = tc - lbs;
    bbs = rc * bbp / 100;
    rc = rc - bbs;
    ops = rc/ 3;
    printf("%d\n", lbs);
    printf("%d\n", bbs);
    printf("%d\n", ops);

    return 0;
}
