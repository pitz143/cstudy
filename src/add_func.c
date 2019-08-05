/* this program is for add two numbers in a seperate function */
#include<stdio.h>

/* 
 * this is declaration of function add (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is sum of p and q (return value)
 */
int add(int p, int q);

/* this is main function  */
void main()
{
	int a,b,sum;
	printf("enter first  number: \n");
	scanf("%d",&a);
	printf("enter second number: \n");
	scanf("%d",&b);
	sum = add(a, b);  /* call / invoke add funtion */
	printf("the sum of two number is: %d\n",sum);
}



/* 
 * this is definition of function add (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is sum of p and q (return value)
 */
int add(int p, int q)
{
	return (p+q);
}
