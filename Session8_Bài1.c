#include <stdio.h>

int main()
{
    float M1, M2, M3, per;
    
    printf("Nhập điểm Môn 1: ");
    scanf("%f", &M1);
    printf("Nhập điểm Môn 2: ");
    scanf("%f", &M2);
    printf("Nhập điểm Môn 3: ");
    scanf("%f", &M3);
    
    per = (M1 + M2 + M3)/3;
    printf("Your percentage is %.2f\n", per);
    
    if(per<50)
    {
        printf("Your grades is: Fail");
    }
    else if(per<60)
    {
        printf("Your grades is: B+");
    }
    else if(per<70)
    {
        printf("Your grades is: A");
    }
    else if(per<80)
    {
        printf("Your grades is: A+");
    }
    else if(per<90)
    {
        printf("Your grades is: E");
    }
    else
    {
        printf("Your grades is: E+");
    }
    
}
