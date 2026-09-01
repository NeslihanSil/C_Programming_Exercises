#include <stdio.h>
int main()
{
	int FinalNotu;
	
	printf("Final notunu girin:");
	scanf("%d",&FinalNotu);
	
	if(FinalNotu>=45)
	{	
		printf("Gecti!\n");
		printf("Tebrikler!\n");
	}
	else
	{
		printf("Kaldi!\n");
		printf("Daha iyi calis!\n");
	}
	
	return 0;
}
