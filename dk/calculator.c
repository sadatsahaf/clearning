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
        else if (a == '-')
                {
                sum = b-c;
                printf("%f", sum);
                }
            else if (a == '*')
                    {
                    sum = b*c;
                    printf("%f", sum);
                    }
                    else if (a == '/')
                        {     
                            sum = b/c;
                            printf("%f", sum);
                        }
                        else if (a == '^')
                            {
                                sum = pow (b,c);
                                printf("%f", sum);
                            }
                            else if (a == '?')
                                    {    
                                    sum = sqrt(b);
                                    printf("%f", sum);
                                    }
                                    
    else 
    printf("cant do it rn");



}