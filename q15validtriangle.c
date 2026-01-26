#include <stdio.h>
int main(){
  int a=60;
  int b=60;
  int c=60;
  int d = a+b+c;
  if(d==180){
      printf("Vaild triangle\n");
  }else{
      printf("not vaild triangle\n");
  }
  printf("sum of angle %d",d);

    return 0;
}
