#include <stdio.h>

int main(){
    int plan;
    scanf("%d",&plan);
    float used;
    scanf("%f",&used);

    switch(plan){
        case 1:
        if(used>=0.0 && used<=1.0){
            printf("Normal Speed");
        }
        else if(used>1.0){
            printf("speed reduced");
        }
        break;
        case 2:
        if(used>=0.0 && used<=2.0){
            printf("Normal Speed");
        }
        else if(used>2.0){
            printf("Extra charges applied");
        }
        break;
    }
    return 0;
}