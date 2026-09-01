#include <stdio.h>
void main(void)
{
    int toplam=0;
    int sayi;
    
    printf("Bir sayi girin(Durmak icin -1 girin):\n");
    scanf("%d",&sayi);
    
    while (sayi!=-1){
        toplam+=sayi;
        printf("sonraki sayiyi girin(durmak icin -1 girin):\n");
        scanf("%d",&sayi);
    }
    printf("toplama sonucunuz=%d\n",toplam);
}
