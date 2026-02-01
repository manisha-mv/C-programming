#include <stdio.h>

int main(){
    int maxWeight, n;
    scanf("%d", &maxWeight);
    scanf("%d", &n);

    int i = 0;
    int weight;
    int total_weight = 0;
    int people = 0;
    int overload = 0;

    while(i < n){
        scanf("%d", &weight);

        if(total_weight + weight <= maxWeight){
            total_weight = total_weight + weight;
            people++;
        }else{
            overload = 1;
            break;
        }
        i++;
    }

    printf("People Entered: %d\n", people);

    if(overload == 1){
        printf("Overload Status: Yes");
    }else{
        printf("Overload Status: No");
    }

    return 0;
}
