/* this program is for divide two numbers in a seperate function */
#include<stdio.h>

/* 
 * this is declaration of function div (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is division of p and q (return value)
 */
int div(int p, int q);

/* this is main function  */
void main()
{
	int a, b, divs;
	printf("enter first  number: \n");
	scanf("%d", &a);
	printf("enter second number: \n");
	scanf("%d", &b);
	divs = div(a, b);  /* call / invoke subs funtion */
	printf("the division of two number is: %d\n", divs);
}



/* 
 * this is definition of function div (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is division of p and q (return value)
 */
int div(int p, int q)
{
	return (p / q);
}
