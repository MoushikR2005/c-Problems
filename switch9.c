#include<stdio.h>
int main(){
    printf("enter the number");
    int standard;
   char s;
   scanf("%d",&standard);
   scanf("%c",&s);
   switch (standard)
   {
   case 1:
   printf("peak(A)25000");

    break;
    case 2:
    printf("Off(B) 2000");
    break;
    case 3:
    printf("peak(C) 4000");
    break;
    case 4:
    printf("Off(D) 30000");
    break;
    default:
     printf("invalid ");
     break;
   }
return 0;
}