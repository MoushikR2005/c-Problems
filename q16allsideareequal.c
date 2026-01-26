#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter the number a:\n");
    printf("Enter the number b:\n");
    printf("Enter the number c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&a==c&&c==a){
        printf("All sides are equal --equilateral");
    }else {
        printf("All sides not equal");
    }
    return 0;
}
