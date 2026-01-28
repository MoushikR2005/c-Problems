#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int res =0;
     for(int i=1;i<=n;i++){
        int dig = n%10;
        res = res *10 + dig;
        n=n/10;
          
     }
    printf("%d",res);
return 0;
}