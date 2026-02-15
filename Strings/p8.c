#include <stdio.h>

int main(){
    char str[40];
    fgets(str,sizeof(str),stdin);

    int count = 0;

    for(int i = 0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("space count = %d",count);
    return 0 ;
}