/* this program is for divide two numbers in a seperate function */
#include<stdio.h>

/* 
 * this is declaration of function div (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is division of p and q (return value)
 */
float div(float p, float q);

/* this is main function  */
void main()
{
	float a, b, divs;
	printf("enter first  number: \n");
	scanf("%f", &a);
	printf("enter second number: \n");
	scanf("%f", &b);
	divs = div(a, b);  /* call / invoke subs funtion */
	printf("the division of two number is: %f\n", divs);
}



/* 
 * this is definition of function div (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is division of p and q (return value)
 */
float div(float p, float q)
{
	return (p / q);
}
