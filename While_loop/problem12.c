#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 0;
    int power;
    int max_usage = 0;
    int surge_hours = 0;

    while(i < n){
        scanf("%d", &power);

        if(power > max_usage){
            max_usage = power;
        }

        if(power > 5){
            surge_hours++;
        }
        i++;
    }

    printf("Max Usage: %d\n", max_usage);
    printf("Surge Hours: %d", surge_hours);

    return 0;
}
