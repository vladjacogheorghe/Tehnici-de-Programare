#include <stdio.h>
#include <stdlib.h>

int v = 9;
int *vPtr, *vPtr2;

int main()
{
	vPtr = &v;
	*vPtr = *vPtr + 5; 
	printf("%d\n", *vPtr);

	(*vPtr)++; 
	printf("%d\n", *vPtr);

	vPtr2 = vPtr; 
	(*vPtr)++; 
	printf("%d\n", *vPtr2);
	printf("%p\n", vPtr);
	printf("%p\n", vPtr2);

	system("pause");
	return 0;
}
