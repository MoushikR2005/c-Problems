#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n%5==0){
        printf("%d number is divisible by ",n);
    }else{
        printf("%d not is divisible by ",n);
    }
    printf("%d",n);
    return 0;
}
