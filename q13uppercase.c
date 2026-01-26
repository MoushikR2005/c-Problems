#include <stdio.h>
int main(){
    char ch;
    printf("Enter the charater:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("it is upper case");
    }else{
        printf("it is lower case");
    }
    return 0;
}
