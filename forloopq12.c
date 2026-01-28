#include<stdio.h>
int main(){
    int a;
    int b;
    int s=1;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
        s=s*a;
    }
printf("%d",s);
    return 0;
}
