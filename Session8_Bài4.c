#include <stdio.h>

int main ()
{
    int a, b, c;
    int max;
    
    printf("Nhập 3 số: ");
    scanf("%d %d %d", &a, &b, &c);
    
    max = a;
    
    if(b > max)
    {
        max=b;
    }
    if(c > max)
    {
        max = c;
    }

    printf("Maxvalue is: %d", max);
}

