#include <stdio.h>

int main(){
    int max_weight;
    int n;
    int passenger_weight ;
    int i =0;

    scanf("%d",&max_weight);
    scanf("%d",&n);
    int total_weight =0;
    int total_weight_count = 0;

    while(i<n){
        scanf("%d",&passenger_weight);
         total_weight = total_weight+passenger_weight;

         if(total_weight<=max_weight){
            total_weight_count++;
         }
         i++;
    }
    printf("Passenger Allowed : %d\n",total_weight_count);
    if(total_weight_count<n){
        printf("Overload : Yes");
    }
    else{
        printf("Overload : No");
    }
    return 0;
}