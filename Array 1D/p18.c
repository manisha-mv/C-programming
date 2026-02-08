#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int currentCount = 1;
    int maxCount = 1;

    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;   
        }

        if(currentCount > maxCount) {
            maxCount = currentCount;
        }
    }

    printf("%d", maxCount);
    return 0;
}
