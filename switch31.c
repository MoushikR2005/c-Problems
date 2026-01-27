#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Fine 1000");
        break;
    case 2:
        printf("Fine 1500");
        break;
    case 3:
        printf("Fine  2000");
        break;

    default:
     printf("invaild fine");
        break;
    }

    return 0;
}