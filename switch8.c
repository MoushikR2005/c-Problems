#include<stdio.h>
int main(){
    printf("enter the mark:");
    int a;
    scanf("%d",&a);
    switch (a/10)
    {
    case 9:
    case 8:
    case 7:
     printf("Distinction");
   break;
    case 6:
    case 5:
   
        printf("Pass");
    break;
    case 4:
    case 3:
    case 2:
        printf("fail");
    break;
    }
return 0;
}