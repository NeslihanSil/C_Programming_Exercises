/*Klavyeden girilen sayýlarýn toplamýný hesaplama:while döngüsü kullanýyoruz*/

#include <stdio.h>
int main(void)
{
	int n;
	int toplam=0;
	
	printf("Bir sayi giriniz(durmak icin -1 giriniz):");
	scanf("%d",&n);
	
	while (n!=-1)
	{
		toplam+=n;
		printf("sonraki sayiyi giriniz(durmak icin -1 giriniz):");
		scanf("%d",&n);	
	}
	printf("girilen sayilarin toplami=%d\n",toplam);
	
return 0;
}
