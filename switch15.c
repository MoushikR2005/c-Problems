#include<stdio.h>
int main(){
    int type;
    int m;
    scanf("%d",&type);
    scanf("%d",&m);
    switch(type){
        case 1:
        if(m==1){
            printf("Regular 50000");
        }else{
        printf("Scholarship 7000");
        }
        break;
    case 2:
      if(m==2){
        printf("Regular 9000");
      }else{
        printf("scholarship 7000");
      }
     break;
   default:
     printf("invaild");
     break;
    }
    return 0;
}