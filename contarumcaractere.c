#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
	char texto[5000],p;
	int cont,i;
	scanf("%s",&texto);
	scanf("%s",&p);
		for (i = 0;texto[i]!=' '; ++i)
		{
			if (texto[i]==p)
			{
				cont+=1;
			}
			
		}
		printf("%d\n",cont );
}
