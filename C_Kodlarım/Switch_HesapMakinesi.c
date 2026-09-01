#include <stdio.h>
void main()
{
    char operatorr;
    int sonuc;
    int deger;
    
    printf("bir operator seciniz:(+ - * / )\n");
    scanf("%c", &operatorr);
    
    printf("bir deger giriniz:\n");
    scanf("%d",&deger);
    
    printf("bir sonuc giriniz:\n");
    scanf("%d",&sonuc);
    
    
    switch(operatorr) {
        case '+':
            printf("toplama sonucu:%d\n",sonuc+= deger);
            break;
        
        case '-':
            printf("cikarma sonucu:%d\n",sonuc-=deger);
            break;
        
        case '*':
            printf("carpim sonucu:%d\n", sonuc*=deger);
            break;
        
        case '/':
            if(deger==0){
                printf("Error:sifira bolme hatasi\n");
                printf("tekrar deneyiniz\n");
            }
            else
                printf("bolum sonucu:%d\n",sonuc/=deger);
                break;
            
        default:
            printf("hatali giris yaptiniz");
            break;
        
    }
    
}
