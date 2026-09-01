#include <stdio.h>
int main(void)
{
    int i;
    printf("cift olan sayilar:\n");
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        else{
            continue;}
    }
return 0;
}
