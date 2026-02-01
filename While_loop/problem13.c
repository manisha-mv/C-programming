#include <stdio.h>

int main(){
    int dataPack, n;
    scanf("%d", &dataPack);
    scanf("%d", &n);

    int i = 0;
    int usage;
    int exhausted_day = -1;
    int overused = 0;

    while(i < n){
        scanf("%d", &usage);

        dataPack = dataPack - usage;

        if(dataPack <= 0){
            exhausted_day = i + 1;  
            if(dataPack < 0){
                overused = -dataPack;
            }
            break;
        }
        i++;
    }

    if(exhausted_day == -1){
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0");
    }else{
        printf("Exhausted Day: %d\n", exhausted_day);
        printf("Overused Data: %d", overused);
    }

    return 0;
}
