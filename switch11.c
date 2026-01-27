#include<stdio.h>
int main(){
    int day;
    printf("Enter the day:\n");
    scanf("%d", &day);
    switch(day){
        case 1:
            printf("Normal speed");
            break;
         case 2:
            printf("Normal speed");
            break;
        default:
            if(day > 2){
                printf("Speed reduced / Extra charges applied");
            } else {
                printf("Alert message");
            }
            break;
    }
    return 0;
}