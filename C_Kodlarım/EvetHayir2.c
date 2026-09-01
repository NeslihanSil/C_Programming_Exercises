#include <stdio.h>
int main()
{
	int sayi;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if (sayi>2 && sayi<5)
	    printf("evet");
	else 
	    printf("hayir");
	    
	return 0;
}
