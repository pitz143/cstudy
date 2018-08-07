/* this program is for add two numbers in a seperate function */
#include<stdio.h>

/* 
 * this is declaration of function add (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is sum of p and q (return value)
 */
float add(float p, float q);

/* this is main function  */
void main()
{
	float a,b,sum;
	printf("enter first  number: \n");
	scanf("%f",&a);
	printf("enter second number: \n");
	scanf("%f",&b);
	sum = add(a, b);  /* call / invoke add funtion */
	printf("the sum of two number is: %f\n",sum);
}



/* 
 * this is definition of function add (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is sum of p and q (return value)
 */
float add(float p, float q)
{
	return (p+q);
}
