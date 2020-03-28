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
int st[50], vf = -1;
void push(int x, int *vf, int st[])
{
	st[++(*vf)] = x;
}
void pop(int *vf, int st[])
{
	*vf = -1;
}
int peek(int *vf, int st[])
{
	return st[*vf];
}
int main()
{
	int aux, ok, n, nr;
	printf("Numere citite: "); scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("nr = "); scanf("%d", &nr);
		aux = nr; vf = -1; ok = 0;
		while (aux)
		{
			push(aux % 10, &vf, st);
			aux /= 10;
		}
		aux = nr;
		while (aux)
		{
			if (aux % 10 != peek(&vf, st))
			{
				ok = 1;
				break;
			}
			aux /= 10;
			vf--;
		}
		if (ok == 0)
			printf("Numarul este palindrom\n");
		else
			printf("Numarul nu este palindrom\n");
	}
	system("pause");
	return 0;
}