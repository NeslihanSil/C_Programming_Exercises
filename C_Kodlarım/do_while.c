/* #include <stdio.h>
*int main(){
*   char a='E';
*   while(a=='E'){
*     printf("Merhaba\n");
*     printf("devam etmek icin (E/H)birini yaziniz:");
*    scanf("%c",&a);}
return 0;
}
*/

#include <stdio.h>
int main(){
    char a;
    
    do{
        printf("Merhaba\n");
        printf("devam etmek icin (E/H)birini seciniz:\n");
        scanf(" %c",&a);
    }
    while(a=='E');
    
return 0;
}
