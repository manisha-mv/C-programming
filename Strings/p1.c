#include <stdio.h>

int main(){
    char str[20];
    scanf("%s",&str);

    int count = 0;

    for(int i = 0;i<str[i]!='\0';i++){
        count++;
    }
    printf("Length of a string : %d",count);
     
    return 0 ;
}


