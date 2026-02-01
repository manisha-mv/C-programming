#include <stdio.h>

int main(){
    int capacity ;
    int n;
    int patients_beds;

    scanf("%d",&capacity);
    scanf("%d",&n);
    int i =0;
    int positive_beds=0;
    int negative_beds =0;
    // int final_beds;
    int positive_beds_count =0;

    int percentage = (capacity *90)/100;
    while(i<n){
        scanf("%d",&patients_beds);
        if(patients_beds>0){
            positive_beds = positive_beds + patients_beds;
            // positive_beds_count++;
            if(positive_beds + negative_beds>percentage){
                positive_beds_count++;
            }
         }else{
            negative_beds = negative_beds +patients_beds;
    }
        i++;
    }
    int final_beds = positive_beds+negative_beds;
    printf("final Occupied beds: %d\n",final_beds);
    printf("Critical hours : %d",positive_beds_count);
    return 0;
}