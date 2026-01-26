#include<stdio.h>
int main(){
   int a;
   printf("enter the number:");
   scanf("%d",&a);
   if(a>=18){
       printf("Voting Eligibilty");
   } else{
       printf("not voting Eligibilty");
   }
    return 0;
}
