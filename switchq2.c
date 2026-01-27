#include<stdio.h>
int main(){
    int mark;
    printf("enter the mark:");
    scanf("%d",&mark);
    switch ((mark/10))
    {
    case 10:
    case 9:
        printf("Grade A");
        break;
    case 8:
    case 7:
       printf("Grade B");
       break;
    case 6:
       printf("Grade c");
       break;
    case 5:
       printf("Grade D ");
       break;
    case 4:
       printf("Gradr E");
       break;
    case 3:
    if(mark>=35&&mark<=39){
        printf("supplementary");
    }else{
        printf("fail");
    }
        break;
    
   
    }
return 0;
}