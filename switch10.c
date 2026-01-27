#include<stdio.h>

int main(){
    int code, exp;
    int base = 0, salary = 0, bonus = 0;
    printf("enter the code:\n");
    printf("enter the exp:\n");
    scanf("%d", &code);
    scanf("%d", &exp);
    switch(code){
        case 1:
            base = 50000;   
            break;
        case 2:
            base = 35000;   
            break;
        default:
            printf("Invalid code");     
    }

    if(exp >= 3){
        bonus = exp * 5000;
    }
    salary = base + bonus;
    printf("Salary %d", salary);
    return 0;
}