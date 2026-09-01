#include <stdio.h>
void main()
{
	int taban,yukseklik,alan;
	
	printf("taban uzunlugu(cm) giriniz:");
	scanf("%d",&taban);
	
	printf("yukseklik(cm) giriniz:");
	scanf("%d",&yukseklik);
	
	alan=(taban*yukseklik)/2;
	
	printf("alan (cm kare):%d",alan);
}
