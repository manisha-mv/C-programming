#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ld;
    int rev =0;
    
    while(n!=0){
        ld = n%10;
        rev = (rev*10)+ld;
        n = n/10;  
    }
    printf("%d",rev);
    return 0;
}