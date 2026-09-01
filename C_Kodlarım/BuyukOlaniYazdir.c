#include<stdio.h>

int main(void)
{
    int a,b;
    printf("birinci sayiyi giriniz:\n");
    scanf("%d",&a);
    
    printf("ikinci sayiyi giriniz:\n");
    scanf("%d",&b);
    
    if(a>b)
        printf("%d, %d sayisindan buyuktur.\n",a,b);
    else if(b>a)
        printf("%d,%d sayisindan buyuktur.\n",b,a);
    else
        printf("Girdiginiz iki sayi birbirine esittir.\n");
        
return 0;
}
