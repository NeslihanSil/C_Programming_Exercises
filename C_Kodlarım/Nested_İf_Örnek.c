#include <stdio.h>
int main()
{
	int FinalNotu;
	
	printf("Final notunu giriniz!:\n");
	scanf("%d",&FinalNotu);
	
	if(FinalNotu>=90)
		printf("Gecti:Notunuz A\n");
	else if(FinalNotu>=80)
		printf("Gecti:Notunuz B\n");
	else if(FinalNotu>=70)
		printf("Gecti:Notunuz C\n");
	else if(FinalNotu>=60)
		printf("Gecti:Notunuz D\n");
	else
		printf("Kaldi:Notunuz F\n");
		
		
	return 0;
		
}
