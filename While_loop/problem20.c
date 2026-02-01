#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 1;
    int prev, curr;
    int drops = 0;
    int streak = 0;
    int crash_day = -1;

    scanf("%d", &prev);

    while(i < n){
        scanf("%d", &curr);

        if(curr < prev){
            drops++;
            streak++;
            if(streak == 3 && crash_day == -1){
                crash_day = i + 1;
            }
        }else{
            streak = 0;
        }
        prev = curr;
        i++;
    }

    if(crash_day == -1){
        printf("Crash Day: Not Detected\n");
    }else{
        printf("Crash Day: %d\n", crash_day);
    }
    printf("Total Drops: %d", drops);

    return 0;
}
