#include <stdio.h>
int main(){
    int n ;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number%d",n);
    }
    else if (n<0)
    {
        printf("negative number%d",n);
    }
    else{
        printf("zero:%d",n);
        
    }
return 0;
}