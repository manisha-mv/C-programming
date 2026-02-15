#include <stdio.h>

int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);

    char search;
    scanf("%c",&search);

    int found = 1;

    for(int i = 0 ;str[i]!='\0';i++){
        if(str[i]==search){
            printf("%d",i);
            found = 0;
            break;
        }
    }
    if(found==1){
        printf("-1");
    }
    return 0 ;

}