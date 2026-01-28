#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(;n!=0;){
        int digit=n%10;
        n=n/10;
    
        if(digit%2==0){
          count++;
        }
    }
    printf("%d",count);
    return 0;
}
