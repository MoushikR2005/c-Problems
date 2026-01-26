#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("%dEven",n);
    } else {
        printf("%dOdd",n);
    }
    printf(n);
return 0;
}