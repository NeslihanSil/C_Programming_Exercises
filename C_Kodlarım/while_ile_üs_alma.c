#include <stdio.h>
void main(void)
{
    int i;
    int sayi;
    int us;
    int sonuc=1;
    
    printf("bir tam sayi girin:\n");
    scanf("%d",&sayi);
    
    printf("bir tam sayi olarak üs degerini girin:\n");
    scanf("%d",&us);
    
    i=1;
    while(i<=us){
        sonuc*=sayi;
        i++;
    }
    printf("girdiginiz degerlere gore sayi^us=%d\n",sonuc);
}
