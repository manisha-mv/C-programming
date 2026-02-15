#include <stdio.h>

int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);

    // int consonant = 0;
    int count = 0;

    for(int i = 0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z') ||( str[i]>='A' && str[i]<='Z')){
            if(str[i]!='a'&& str[i]!='e' && str[i]!='i'&& str[i]!='o' && str[i]!='u'&&
            str[i]!='A'&& str[i]!='E'&& str[i]!='I'&& str[i]!='O'&& str[i]!='U'){
            count++;
        }
        }
    }
    // if(consonant==0){
    //     count++;
    // }
    // else{
    //     count = 0;
    // }
    printf("Consonant count = %d",count);
    return 0 ;
}

