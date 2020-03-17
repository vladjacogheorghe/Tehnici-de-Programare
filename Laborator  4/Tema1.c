#include <stdio.h>
#include <stdlib.h>

//Sa se scrie un program care calculeaza suma elementelor unui vector folosindu se doar de variabile de tip pointer

int main()
{
	int *v, *i, *s, *n;
	n = (int*)malloc(sizeof(int));
	printf("n: ");
	scanf("%d", n);
	i = (int*)malloc(sizeof(int));
	s = (int*)malloc(sizeof(int));
	v = (int*)malloc(*n * sizeof(int));
	*s = 0;
	for (*i = 0; *i < *n; *i = *i + 1) {
		printf("v[%d]: ", *i);
		scanf("%d", v + *i);
	}
	for (*i = 0; *i < *n; *i = *i + 1) {
		*s = *s + *(v + *i);
	}
	printf("Suma este %d", *s);
	free(s);
	free(n);
	free(i);
	free(v);
	return 0;
}