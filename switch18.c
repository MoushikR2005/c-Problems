#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    switch(a){
        case 1:
         if(b>=80){
            printf("Exellent");
         }else{
            printf("not qulified");
         }
        break;
        case 2:
        if(b>=60){
            printf("Good");

        }else {
            printf("not qulified");
        }
        break;
        case 3:
        printf("Need improvement");
        break;
        default:
        printf("invaild attempts");
    }
    return 0;
}