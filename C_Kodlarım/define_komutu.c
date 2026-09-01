//C dilinde sabitler,const ve define komutu örneði
#define harf 'A'
#define PI 3.14
#define X 20
#include <stdio.h>
int main()
{
    const int a=10;
    
    printf("%.2f\n",a*PI);
    printf("%c\n",harf);
    printf("%d tane %c harfi",X,harf);
    
return 0 ;
}
