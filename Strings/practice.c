#include <stdio.h>
#include <string.h>


int main(){
    // char str1[30];
    // char str2[]={"hello World"};

    // strcpy(str1,str2);
    // printf("%s",str1);

    // char str[]={"hello"};
    // char str2[]={"nisha"};
    // strcat(str , str2);
    // printf("%s",str);
    // return  0;


    char str[]="Manisha";

    // int i = 0;

    // while(str[i]!='\0'){
    //     printf("%c\n",str[i]);
    //     i++;
    // }


    int length =0;
    while(str[length]!='\0'){
        length++;
    }
    printf("%d",length);
    return 0 ;
}