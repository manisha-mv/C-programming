#include <stdio.h>

int main(){
    int capacity, n;
    scanf("%d", &capacity);
    scanf("%d", &n);

    int i = 0, patients;
    int treated = 0;
    int rejected = 0;

    while(i < n){
        scanf("%d", &patients);

        if(treated < capacity){
            if(treated + patients <= capacity){
                treated = treated + patients;
            }else{
                rejected = rejected + (treated + patients - capacity);
                treated = capacity;
            }
        }else{
            rejected = rejected + patients;
        }
        i++;
    }

    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d", rejected);

    return 0;
}
