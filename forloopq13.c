#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int mul=1;
    int sum=0;
    for(int i=1;i<=b;i++){
        mul=a*i;
        if(mul<b){
            sum+=mul;
        }
    } 
    printf("%d",sum);
    return 0;
}