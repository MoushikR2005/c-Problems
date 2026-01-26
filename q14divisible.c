#include <stdio.h>
int main(){
  int a;
  printf("Enter the number:");
  scanf("%d",&a);
  if(a%11==0){
      printf("Divisible by 11");
  }else {
      printf("not is divisible by 11");
  }
    return 0;
}
