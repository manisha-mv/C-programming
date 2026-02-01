#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 0;
    int vehicles;
    int congestion_minutes = 0;
    int current_streak = 0;
    int longest_streak = 0;

    while(i < n){
        scanf("%d", &vehicles);

        if(vehicles > 20){
            congestion_minutes++;
            current_streak++;

            if(current_streak > longest_streak){
                longest_streak = current_streak;
            }
        }else{
            current_streak = 0;
        }
        i++;
    }

    printf("Congestion Minutes: %d\n", congestion_minutes);
    printf("Longest Congestion Streak: %d", longest_streak);

    return 0;
}
