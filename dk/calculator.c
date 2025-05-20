#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float b, c, sum;
    char a;
    scanf("%f %c %f", &b, &a, &c);
    if (a == '+')
    {
        sum = b+c;
        printf("%f", sum);
    }
    if (a == '-')
    {
        sum = b-c;
        printf("%f", sum);
    }
    if (a == '*')
    {
        sum = b*c;
        printf("%f", sum);
    }
    if (a == '/')
    {
        sum = b/c;
        printf("%f", sum);
    }
    if (a == '^')
    {
        sum = pow (b,c);
        printf("%f", sum);
    }
    if (a == '?')
    { 
        sum = sqrt(b);
        printf("%f", sum);
    }



}