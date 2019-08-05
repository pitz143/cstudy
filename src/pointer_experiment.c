/* this program is for add two numbers in a seperate function */
#include<stdio.h>

/* 
 * this is declaration of function add (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is sum of p and q (return value)
 */
int incr(int *a, int *b);

/* this is main function  */
void main()
{
	int a,b,sum;
	printf("enter first  number: \n");
	scanf("%d",&a);
	printf("enter second number: \n");
	scanf("%d",&b);
	sum = incr(&a, &b);  /* call / invoke add funtion */
	printf("in main: after increment a= %d b=%d\n",a,b);
}



/* 
 * this is definition of function add (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is sum of p and q (return value)
 */
int incr(int *a, int *b)
{
	(*a)++;
	(*b)++;
	printf("in incr: after increment a= %d b=%d\n",*a,*b);
}
