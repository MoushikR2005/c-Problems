#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    switch(a){
        case 1:
         c=10;
        break;
        case 2:
         c=20;
        break;
        default:
        printf("20 per");
        break;
    }
    printf("%d",c*b);
    return 0;
}
