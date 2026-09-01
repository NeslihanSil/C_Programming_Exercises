#include <stdio.h>
int main()
{
	int Ortalama;
	
	printf("Ortalama notunu giriniz:\n");
	scanf("%d",&Ortalama);
	
	switch(Ortalama)
	{
		case 5: printf("Mükemmel\n");
				break;
		case 4: printf("Ýyi\n");
				break;
		case 3: printf("Gecer\n");
				break;
		case 2:printf("Zayif\n");
				break;
		case 1: printf("Kalir\n");
				break;
		default: printf("Gecersiz not\n");
				break;
	}
	
	return 0;
}
