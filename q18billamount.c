#include<stdio.h>
int main(){
    int a=120;
    if(a>=50 && a<=190){
        printf("bill amount is %d",a*5);
    } else if(a>=200&&a<=300){
        printf("bill amount is %d",a*7);
    } else if(a>=300&&a<=400){
        printf("bill amount is %d",a*8);
    } else {
        printf("bill amount is %d",a*12);
    }
    

    return 0;
}
