#include <stdio.h>
int main()
{
    int a, b, temp, gcd, lcm;
    printf("enter the number = ");
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while(b!= 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    printf("%d\n", gcd);
    printf("%d", lcm);
    return 0;
}
