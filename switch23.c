#include <stdio.h>

int main (){
       int n;
    scanf("%d",&n);
    int talk ;
    scanf("%d",&talk);
    switch (n)
    {
    case 1:
        printf("%d",talk*1);
        break;
     case 2:
        printf("%d",talk*3);
        break;
     case 3:
        printf("%d",talk*10);
        break;
    
    default:
        break;
    }

    return 0;

}