#include<stdio.h>
int main(){
    int IntegeraccountType;
    int integerbalance;
    int integerwithdrawAmount;
    scanf("%d ",&IntegeraccountType);
    scanf("%d",&integerbalance);
    scanf("%d",&integerwithdrawAmount);
    switch (IntegeraccountType)
    {
        case 1:
        if(integerbalance >= integerwithdrawAmount){
            printf("Transaction Successfull ");
        }else{
            printf("failed Transaction  ");
        }
  
         break;
        case 2:
        if(integerwithdrawAmount<=5000){
            printf("Requested amount exceeds limit");
        }else{
            printf("Transaction rejected");
        }

          break;
    }
return 0;
}