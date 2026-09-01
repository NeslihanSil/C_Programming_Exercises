// for döngüsü içinde break komutu nasýl kullanýlýr örnek:
#include <stdio.h>
int main(){
    int i;
    for(i=0;i<10;i++){
        if(i==5){
          printf("Döngü %d sayida kirildi\n",i);  
          break;}
        printf("%d\n",i);}
return 0;

}
