//Sa se scrie un program care calculeaza suma elementelor unui vector folosindu se doar de variabile de tip pointer
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int s = 0, v[100], n, i;
	printf("n:"); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("v[%d]:", i); scanf("%d", (v + i));
	}
	for (i = 0; i < n; i++)
	{
		s = s + *(v + i);
	}
	printf("Suma este %d\n", s);
	system("pause");
	return 0;
}