#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void VerificareCuSau(int v[], int n)
{
	int i, s = 0;

	for (i = 0; i < n; i++)
	{
		s = (s | v[i]);
		//printf("%d\n", s);
	}
	if ((s&(1 << 0)) == 0)
		//aici se imparte pentru a afla ultimul bit si a arata daca e par sau impar ;)
	{
		printf("Numarul este Par\n");
	}
	else
	{
		printf("Numarul este Impar\n");
	}
}

int main()
{
	int v[100], n, i;
	printf("n="); scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);	scanf("%d", &v[i]);
	}

	VerificareCuSau(v, n);
	system("pause");
	return 0;
}