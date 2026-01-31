#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int noise;
    int i =0;
    
    int total = 0;
    int current = 0;
    int max =0;
    
    
    while(i<n){
        scanf("%d",noise);
        
        if(noise>70){
            total++;
            current++;
            
            if(current>max){
                max = current;
            }
            else{
                current =0;
            }
            i++;
        }
        printf("Noise Violation; %d",total);
        printf("Longest Violation : %d",max);
    }
    return 0;
}