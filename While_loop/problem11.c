#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 0;
    int delay;
    int total_delay = 0;
    int delayed_days = 0;

    while(i < n){
        scanf("%d", &delay);

        total_delay = total_delay + delay;

        if(delay > 2){
            delayed_days++;
        }
        i++;
    }

    printf("Total Delay: %d\n", total_delay);
    printf("Delayed Days: %d", delayed_days);

    return 0;
}
