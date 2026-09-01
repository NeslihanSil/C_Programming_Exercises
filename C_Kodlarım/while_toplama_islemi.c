//1'den N'e kadar olan sayýlarýn toplamýný hesaplama


#include <stdio.h>
int main()
{
	int i;
	int N;
	int toplam=0;
	printf("Sayiyi giriniz:\n");
	scanf("%d",&N);
	
	i=1;
	while(i<=N)
	{
		toplam+=i;
		i++;
	}
	printf("1'den N'e kadar olan sayilarin toplami=%d\n",toplam);
	
	
	return 0;
}
