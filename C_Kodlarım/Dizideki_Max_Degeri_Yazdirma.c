//Dizideki en büyük elemaný ekrana yazdýran program:
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    double a[SIZE]={1.2,3.4,5.6,7.8,9.0};
    double max =0.0;
    
    for(i=0;i<SIZE;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("dizideki maximum deger=%.2lf\n",max);
    return 0;
}
