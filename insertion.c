#include <stdio.h>

int main() {
    int size, pos, newEle;
    scanf("%d", &size);

    int arr[size + 1];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &pos);
    scanf("%d", &newEle);
    if(pos < 1 || pos > size + 1) {
        printf("Invalid Input\n");
    } else {
        for(int i = size; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = newEle;
        printf("Array after insertion is\n");
        for(int i = 0; i <= size; i++) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
