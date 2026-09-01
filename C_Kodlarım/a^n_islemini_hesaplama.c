#include <stdio.h>
int main()
{
	int i;
	int us;
	int sayi;
	int sonuc=1;
	
	printf("sayi girin:\n");
	scanf("%d",&sayi);
	
	printf("us girin:\n");
	scanf("%d",&us);
	
	i=1;
	while(i<=us)
	{
		sonuc*=us;
		i++;
	}
	
	printf("sayi^us=%d\n",sonuc);
	
return 0;
}
