#include <stdio.h>
int main()
{
    int M[5][9]={{1,2,3,4,5,6,7,8,9},
                {1,4,6,0,0,3,4,5,6},
                {2,3,6,4,3,7,2,9,6},
                {2,6,9,0,3,5,7,856,98},
                {33,22,76,87,43,32,1,1,1}};
                    
    int i,j;
    int min=M[0][0];
    int max=M[0][0];
    
    for (i=0;i<5;i++){
        for(j=0;j<9;j++){
            if(M[i][j]<min)
                min=M[i][j];
            if(M[i][j]>max)
                max=M[i][j];
        }
    }    
printf("minimum deger=%d\nmaximum deger=%d\n",min,max);
    
return 0;
}
