//Bir dizideki elemanlari ekrana yazdýran program:
#include <stdio.h>
int main()
{
    int sayilar[5]={7,3,23,123,90};
    int i;
    
    for(i=0;i<5;i++){
    printf("sayilar[%d]=%d\n",i,sayilar[i]);
    }
    return 0;
}
