#include <stdio.h>

int main()
{
    float x ,y;
    
    printf("Nhập vào số x: ");
    scanf("%f", &x);
    printf("Nhập vào số y: ");
    scanf("%f", &y);
    
    if(x>2000&&x<3000)
    {
        printf("Số X là: %.2f.\n", x);
    }
    else
    {
        printf("X không khả dụng.\n");
    }
    if(y>100&&y<500)
    {
        printf("Số Y là : %.2f.\n", y);
    }
    else
    {
        printf("Y không khả dụng.\n");
    }
}

