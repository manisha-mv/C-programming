#include <stdio.h>

int main(){
    int fuel, n;
    scanf("%d", &fuel);
    scanf("%d", &n);

    int i = 0;
    int trip_fuel;
    int completed_trips = 0;

    while(i < n){
        scanf("%d", &trip_fuel);

        if(fuel >= trip_fuel){
            fuel = fuel - trip_fuel;
            completed_trips++;
        }else{
            break;  
        }
        i++;
    }

    printf("Completed Trips: %d\n", completed_trips);
    printf("Remaining Fuel: %d", fuel);

    return 0;
}
