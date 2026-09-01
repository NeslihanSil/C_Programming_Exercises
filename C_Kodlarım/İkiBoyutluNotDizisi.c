//5 kiþilik bir öðrenci grubu için 8 adet test uygulansýn. Bunlarýn
//sonuçlarýný saklamak için 2 boyutlu bir dizi kullanalým.
#include<stdio.h>
int main(void)
{
    int ogrenci_tablosu [5][8];
    int i,j;
    
    for(i=0;i<5;i++){
        for(j=0;j<8;j++){
            printf("%d nolu ogrencinin ", (i+1));
            printf("%d nolu sýnavi=",(j+1));
            scanf("%d",&ogrenci_tablosu[i][j]);
        }
    }
return 0;
}
