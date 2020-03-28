#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, n, k = 0, v[100], x = 1, stiva[100] = { 0 }, biti[sizeof(int) * 2] = { 0 }, inv[sizeof(int) * 2] = { 0 }, a;
	printf("n="); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < n; i++)
	{
		k = 0;
		a = v[i];
		while (a != 0) {
			biti[k] = a % 2;
			k++;
			a = a / 2;
		}
		printf("v[%d] in binar: ", i);
		for (j = sizeof(int) * 2 - 1; j >= 0; j--)
		{
			printf("%d", biti[j]);
		}
		printf("\n");
		for (j = 0; j < sizeof(int) * 2; j++) {
			if (biti[j] == 0) {
				inv[j] = 1;
			}
			else {
				inv[j] = 0;
			}
		}
		printf("v[%d] inversat: ", i);
		for (j = sizeof(int) * 2 - 1; j >= 0; j--)
		{
			printf("%d", inv[j]);
		}
		for (j = 0; j < sizeof(int) * 2; j++) 
		{
			stiva[i] = stiva[i] + inv[j] * x;
			x = x * 10;
		}
		printf("\n");
		printf("\n");
		biti[i] = 0;
		inv[i] = 0;
		x = 1;
	}
	printf("Numerele inversate salvate in stiva sunt: ");
	for (i = 0; i < n; i++) {
		printf("%d ", stiva[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}




