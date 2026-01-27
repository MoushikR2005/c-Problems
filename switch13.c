#include<stdio.h>
int main(){
    int type;
    int creditscore;
    scanf("%d",&type);
    scanf("%d",&creditscore);
    switch (type) {
        case 1:
        if(creditscore >= 700){
            printf("Approved");
        }else if(creditscore>=650&&creditscore<=699) {
            printf("manual review");
        }
        break;
        case 2:
        if(creditscore >= 700){
            printf("approved");
        }else {
            printf("Rejected");
        }
        break;

    
    default:
     printf("invaild credit score");
        break;
    }
return 0;
}