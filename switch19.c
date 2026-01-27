#include<stdio.h>
int main(){
    int a;
    int b;
     
   scanf("%d",&a);
   scanf("%d",&b);
   switch(a){
    case 1:
     if(b<=30){
        printf("Eligible");
     }else {
        printf("Eligible with Extra Fee");
     }
     break;
     case 2:
     if(b<=30){
        printf("Eligible");
     }else{
        printf("not Eligible");
     }
     break;
   }
   return 0;
}
