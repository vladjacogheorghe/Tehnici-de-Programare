#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//sa se scrie un program care insumeaza elementele intr o metoda separate de metoda main, folosind transmiterea prin referinta

void suma(int v[], int n, int *s)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*s = *s + v[i];
	}
}

int main()
{
	int s = 0, v[100], n, i;
	printf("n:"); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("v[%d]:", i); scanf("%d", &v[i]);
	}
	suma(v, n, &s);
	printf("Suma este %d\n", s);
	system("pause");
	return 0;
}