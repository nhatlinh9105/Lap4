#include <stdio.h>
#include <string.h>

int main()
{
    char chu;
    
    printf("Nhập một chữ cái: ");
    scanf("%c", &chu);
    
    
    switch (chu)
    {
        case 'A':
            printf("Ada");
            break;
       
        case 'a':
            printf("Ada");
            break;
        
        case 'B':
            printf("Basic");
            break;
       
        case 'b':
            printf("Basic");
            break;
        
        case 'C':
            printf("COBOL");
            break;
            
        case 'c':
            printf("COLBOL");
            break;
        
        case 'D':
            printf("dBase III");
            break;
        
        case 'd':
            printf("dBase III");
            break;
        
        case 'F':
            printf("Fotran");
            break;
        
        case 'f':
            printf("Fotran");
            break;
        
        case 'P':
            printf("Pascal");
            break;
        
        case 'p':
            printf("Pascal");
            break;

        case 'V':
            printf("Visual C++");
            break;
        
        case 'v':
            printf("Visual C++");
            break;

        default:
            printf("Invalid");
            break;
    }
}
