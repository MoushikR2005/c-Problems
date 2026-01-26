#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>=100 && a<=999){
        printf("three digit number");
    }else {
        printf("invaild number:");
    }
    
    return 0;
}
