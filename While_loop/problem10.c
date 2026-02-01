#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 0;
    int hours;
    int inactive_weeks = 0;

    while(i < n){
        scanf("%d", &hours);

        if(hours == 0){
            inactive_weeks++;
        }
        i++;
    }

    printf("Inactive Weeks: %d\n", inactive_weeks);

    if(inactive_weeks >= 3){
        printf("Risk Status: High");
    }else{
        printf("Risk Status: Low");
    }

    return 0;
}
