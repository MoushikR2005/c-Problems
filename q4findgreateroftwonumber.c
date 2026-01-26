#include<stdio.h>
int main(){
int m;
int n;
printf("enter two number:");
scanf("%d %d",&m,&n);
if(n>m){
    printf("%d is greater  ",n);
}else if (m>n){
    printf("%d is greater",m);

} else {
    printf("%d is invaild number");
}
return 0;
}
