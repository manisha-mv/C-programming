#include <stdio.h>

int main(){
    int capacity, n;
    scanf("%d", &capacity);
    scanf("%d", &n);

    int i = 0, load;
    int safe_hours = 0;
    int failures = 0;

    while(i < n){
        scanf("%d", &load);

        if(load <= capacity){
            safe_hours++;
        }else{
            failures++;
        }
        i++;
    }

    printf("Safe Hours: %d\n", safe_hours);
    printf("Failure Count: %d", failures);

    return 0;
}
