#include <stdio.h>
int main(){
char Mean;
int a;
int b;
printf("enter the number1:\n");
printf("enter the number2:\n");
printf("Menu\n");
printf("addition +\n");
printf("subraction -\n");
printf("multiple *\n");
printf("division /\n");
scanf("%d \n %d \n",&a,&b);
scanf("%c",&Mean);
switch(Mean){
    case '+':
    printf("add = %d",a+b);
    break;
    case '-':
    printf("sub =  %d",a-b);
    break;
    case '*':
    printf("muliti = %d",a*b);
    break;
    case '/':
    printf("divi = %d" ,a/b);
    break;
    default:
    printf("invaild");
    
}
return 0;
}
