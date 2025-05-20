#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a;
    
    scanf("%d", &a);

    if ((a % 2 == 0) && (a % 3 == 0))

    {
        printf("a is devisable by 5 and 11");
        
    }
    else 
    {
        printf("a is not devissable by 5 and 11");
    }
        
}