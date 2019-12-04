#include <stdio.h>
 int main()
{
	int aux,cont = 0,j, i;
	int numeros[5];
	for (i = 0; i < 5; ++i)
	{
		scanf("%d",&numeros[i]);
	}
	for(j=i;j>=1;j--)
	{
	    
	for (i = 0; i < j-1; ++i)
	{
		if (numeros[i]>numeros[i+1])
		{
			aux=numeros[i];
			numeros[i]=numeros[i+1];
			numeros[i+1]=aux;
		}
	}
	}
	
		printf("%d\n%d\n%d",numeros[i],numeros[i+2],numeros[i+4]);
	
	
	return 0;
}
