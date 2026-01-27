#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Delivery Charge = 40");
        break;
    case 2:
        printf("Delivery Charge = 120");
        break;
    case 3:
        printf("Delivery Charge Free");
        break;

    default:
        break;
    }
    return 0;
}