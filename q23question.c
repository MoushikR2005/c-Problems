#include <stdio.h>
int main(){
    int month;
    printf("enter the month ");
    scanf("%d",&month);
    switch(month){
    case 1:
    printf("31days");
    break;
    case 2:
    printf("28and29day");
    break;
    case 3:
    printf("31days");
    break;
    case 4:
    printf("30days");
    break;
    case 5:
    printf("31days");
    break;
    case 6:
    printf("30days");
    break;
    case 7:
    printf("31days");
    break;
    case 8:
    printf("30days");
    break;
    case 9:
    printf("31days");
     break;
    case 10:
    printf("30days");
    break;
    case 11:
    printf("31days");
    break;
    case 12:
    printf("30days");
    break;
    default:
    printf("invaild");
    
}
return 0;
}
