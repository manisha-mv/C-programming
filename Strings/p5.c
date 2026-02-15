#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);
    // scanf("%s",str);

    int i = 0;
    int j = strlen(str)-2;
    int palindrome =1;



    while(i<j){
        if(str[i]!=str[j]){
            palindrome = 0;
        }
        i++;
        j--;
    }

    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("NOt palindrome");
    }
    return 0 ;
}