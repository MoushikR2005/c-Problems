#include<stdio.h>
int main(){
  char ch;
  scanf("%c",&ch);
  if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='O'||ch=='o'||ch=='I'||ch=='i'||ch=='U'||ch=='u'){
      printf("%c vowels", ch);
  }else {
      printf("%c consonant", ch);
  }
  
    return 0;
}
