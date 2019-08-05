#include<stdio.h>


void main()
{
	int i;
	int a[5];
	for (i=0; i<5; i++) {
		printf("enter a numbers @index=%d\n", i);
		scanf("%d", &a[i]);
	}
	printf("printing the array in reverse\n");
	for (i=4; i>=0; i--) {
		printf("%d\n", a[i]);
	}
}
