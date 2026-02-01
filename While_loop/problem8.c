#include <stdio.h>

int main(){
    int n, value;
    scanf("%d", &n);

    int count = 0;
    int max = 0;
    int i = 0;

    while(i < n){
        scanf("%d", &value);

        if(value == 0){
            count++;
            if(count > max){
                max = count;
            }
        } else {
            count = 0;
        }
        i++;
    }

    printf("Longest Default Streak: %d", max);
    return 0;
}
