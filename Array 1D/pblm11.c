#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    for(int i = 0; i < N; i++){
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < N; i++){
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum){
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }
    printf("-1");
    return 0;
}
