#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if(a == b && b == c)
    {
        printf("All numbers are equal");
    }
    else if(a == b && a > c)
    {
        printf("A and B are greatest");
    }
    else if(a == c && a > b)
    {
        printf("A and C are greatest");
    }
    else if(b == c && b > a)
    {
        printf("B and C are greatest");
    }
    else if(a > b && a > c)
    {
        printf("A is greatest");
    }
    else if(b > a && b > c)
    {
        printf("B is greatest");
    }
    else
    {
        printf("C is greatest");
    }

    return 0;
}