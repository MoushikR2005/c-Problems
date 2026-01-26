#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    
    printf("Enter the number1:\n");
    printf("Enter tne number2:\n");
    printf("Enter the number3:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b<a && a>c && c<a){
        printf("a is largest number");
    } else if(b>a && a<b && b>c && c<b){
        printf("b is largest number");
    }else{
        printf("c is largest number");
    }
    
    
    return 0;
}
