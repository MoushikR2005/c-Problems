#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    printf("Enter how many  daysLate :  ");
    int a;
    scanf("%d",&a);

    switch (n)
    {
    case 1:
        printf("%d",a*2);
        break;
     case 2:
        printf("%d",a*5);
        break;
    
    default:
     printf("invaild days" );
        break;
    }
    return 0;
}