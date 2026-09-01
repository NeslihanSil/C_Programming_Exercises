#include <stdio.h>
int main()
{

    char secim;
    printf("Hesap makinesi\n");
    printf("Bir islem seciniz:(+ - * /)\n");
    scanf("%c",&secim);
    
    float a,b;
    printf("Ard arda iki sayi giriniz:\n");
    scanf("%f %f",&a,&b);
    
    switch (secim)
    {
        case '+':
            printf("toplama sonucu=%.2f",a+b);
            break;
        case '-':
            printf("Cikarma sonucu=%.2f",a-b);
            break;
        case'*':
            printf("Carpim sonucu=%.2f",a*b);
            break;
        case '/':
            printf("Bolum sonucu=%.2f",a/b);
            break;
        default:
            printf("Hatali giris yaptiniz!");
        
    }
            
return 0;
        
 }
