#include <stdio.h>
#include <stdlib.h>



void particao(int valor[], int esquerda, int direita)
{
    int i, j, x, y,k=0;;
    i = esquerda;
    j = direita;
    x = valor[0];

    while(i <= j)
    {
        while(valor[i] < x && i < direita)
        {
            i++;
        }
        while(valor[j] > x && j > esquerda)
        {
            j--;
        }
        if(i <= j)
        {
            y = valor[i];
            valor[i] = valor[j];
            valor[j] = y;
            i++;
            j--;
        }
    }
    
    
    for(k=0;k<7;k++)
    	printf("%d ",k,valor[k]);
    	
    printf("\n");
    
    
}

int main()
{
	
	int v [] = {5,2,7,1,9,8,1};
	particao(v,0,6);
	
	
	system("PAUSE");
	return 0;
}
