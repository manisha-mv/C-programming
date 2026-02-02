#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int K;
    scanf("%d", &K);

    for(int i = 0; i < K; i++) {
        int first = arr[0];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            

        for(int j = 0; j < N-1; j++) {
            arr[j] = arr[j+1];
        }

        arr[N-1] = first;
    }

    for(int i = 0; i < N; i++)
        printf("%d ", arr[i]);

    return 0;
}
