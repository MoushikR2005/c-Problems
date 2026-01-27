#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Upgrade Fee 300 ");
        break;
    case 2:
        printf("Upgrade Fee 800");
        break;
    case 3:
        printf("Upgrade Fee 1500");
        break;

    default:
        break;
    }

    return 0;
}