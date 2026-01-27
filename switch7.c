#include<stdio.h>
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    int b;
    printf("Enter the number:");
    scanf("%d",&b);
    switch (a)
    {
    case 1:
      printf("saving 4%%");
      break;
    case 2:
       if(b<=3){
        printf("year 5%%");
       }else{
        printf("year 7%%");
       }
       break;

      
    }
return 0;
}