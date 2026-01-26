#include <stdio.h>
int main(){
    int a;
   printf("enter the mark:");
   scanf("%d",&a);
   if(a>=90&&a<=100){
       printf("Grade A+");
   }else if(a>=80&&a<=89){
       printf("Grade A");
   }else if(a>=70&&a<=80){
       printf("Grade B+");
   }else if(a>=60&&a<=70){
       printf("Grade B");
   }else if(a>=50&&a<=60){
       printf("Grade C+");
   }else if(a>=40&&a<=50){
       printf("Grade C");
   }else{
       printf("Grade U fail");
   }
    
    return 0;
}
