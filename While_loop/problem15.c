#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 0;
    int hours;
    int total_overtime = 0;
    int burnout_days = 0;

    while(i < n){
        scanf("%d", &hours);

        total_overtime = total_overtime + hours;

        if(hours > 4){
            burnout_days++;
        }
        i++;
    }

    printf("Total Overtime: %d\n", total_overtime);
    printf("Burnout Days: %d", burnout_days);

    return 0;
}
