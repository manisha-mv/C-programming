#include <stdio.h>

int main(){
    int n ;
    int vibrate_levels ;
    int i=0;
    scanf("%d",&n);
    int unsafe_count = 0;
    int count_reading = 0;
    // int index = 0;
    // int max = 0;
    int vibrate_levels_count = -1;

    while(i<n){
        scanf("%d",&vibrate_levels);

        if(vibrate_levels>70){
            unsafe_count++;
            count_reading++;
        if(count_reading==2 && vibrate_levels_count==-1){
            vibrate_levels_count= i+1;
        }
    }
        else{
            count_reading = 0;
        }
        i++;
    }
    if(vibrate_levels_count==-1)
    {
        printf("Breakdown At reading : Not Occured\n");
    }
    else 
    {
    printf("Breakdown At Reading : %d\n",vibrate_levels_count);
    }
    printf("Unsafe Reading : %d ",unsafe_count);
    return 0;
}