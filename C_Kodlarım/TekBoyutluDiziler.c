#include <stdio.h>
#define SIZE 5

int main (void)
{
	int i;
	double a [SIZE];
	printf("%d tane dizi elemani gir:",SIZE);
	
	for(i=0;i<SIZE;i++)
		scanf("%lf",&a[i]);
	return 0;
}
