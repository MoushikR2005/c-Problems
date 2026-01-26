#include<stdio.h>
int main(){
   int a;
   printf("enter the number:");
   scanf("%d",&a);
   if(a%3==0 && a%7==0){
       printf("Multiple of both 3 and 7");
   } else{
       printf("not multiple of both 3 and 7");
   }
    return 0;
}
