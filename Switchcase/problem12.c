#include <stdio.h>

int main(){
    int v_type;
    scanf("%d",&v_type);
    int trips;
    scanf("%d",&trips);

  switch(v_type){
    case 1:
    if(trips==1){
        printf("100");
    }
    else if(trips>=2 && trips<=10){
        printf("800");
    }
    else{
        printf("800");
    }
    break;
    case 2:
     if(trips==1){
        printf("240");
     }
     else{
        printf("%d",trips*240);
     }
     break;
  }
  return 0;
}
