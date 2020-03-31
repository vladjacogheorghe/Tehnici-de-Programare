//3. Se citesc de la tastatura tastatura N numere intregi.Sa
//se verifice folosind DOAR stive daca numerele respective
//sunt palindroame, iar numere care sunt palindroame vor fi
//introduce intr - o stiva.La sfarsit se va afisa continutul stivei
//respective.Cerinta de implementare : Se va implementa o
//singura metoda de Push/Pop/Peek , se va stii pe care
//stiva se lucreaza transmitand parametrii prin referinta.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int palindrom(int n)
{
	int aux, inv = 0;
	aux = n;
	while (n != 0)
	{
		inv = inv * 10 + n % 10;
		n = n / 10;
	}
	if (aux == inv)
	{
		return 1; //este palindrom
	}
	else
	{
		return 0; //nu e palindrom
	}
}
void push(int x, int *vf, int st[])
{
	st[++(*vf)] = x;
}
int main()
{
	int st[50], vf = -1;
	int i, n, nr;
	printf("Numere citite: "); scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Dati un numar:"); scanf("%d", &nr);
		if (palindrom(nr) == 1)
		{
			push(nr, &vf, st);
		}
	}
	for (i = 0; i <= vf; i++)
	{
		printf("%d\n", st[i]);
	}
	system("pause");
	return 0;
}
