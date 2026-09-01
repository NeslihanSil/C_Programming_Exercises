#include<stdio.h>
int main()
{
    int sayilar[]={13,43,54,67,89,66,99};
    int a,boyut;
    printf("bir int deger %d byte\n",sizeof(a));
    printf("sayilar adli dizi toplam %d byte yer kaplar\n",sizeof(sayilar));
    printf("sayilar dizisi %d elemanli bir dizidir\n",sizeof(sayilar)/4);
    
    //dizinin kaç elemanlý olduðunu  hesaplamak için daha pratik bir yol vardýr:
    printf("sayilar dizisi %d elemanlý bir dizidir\n",sizeof(sayilar)/sizeof(sayilar[0]));
    //burada dizinin toplam boyutunu bir elemanýnýn boyutuna bölerek dizideki toplam eleman sayýsýný ekrana yazdýrmýþ olduk.
    boyut=sizeof(sayilar)/sizeof(sayilar[0]);
    
    for(a=0;a<boyut;a++){
        printf("%d ",sayilar[a]);
    }
}
