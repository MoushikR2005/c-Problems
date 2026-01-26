#include <stdio.h>
int main(){
 int a;
 int b;
 char symbol;
 printf("enter the two number:");
 scanf("%d %d",&a,&b);

 printf("enter the symbol + - * / ");
 scanf(" %c",&symbol);

 switch(symbol){
   case '+':
   
   printf("add =  %d",a+b);
   break;
   case '-':
   printf("sub=  %d",a-b);
   break;
   case '*':
   printf("mulit =  %d",a*b);
   break;
   case '/':
   if(b!=0){
   printf("divi =  %d",a/b);
   }else{
       printf("division by zero not allowed");
       break;
   }
   
   default:
   printf("invaild choice");
   }
   

return 0;
}
