/* this program is for substract two numbers in a seperate function */
#include<stdio.h>

/* 
 * this is declaration of function substract (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is diff of p and q (return value)
 */
float subs(float p, float q);

/* this is main function  */
void main()
{
	float a, b, diff;
	printf("enter first  number: \n");
	scanf("%f", &a);
	printf("enter second number: \n");
	scanf("%f", &b);
	diff = subs(a, b);  /* call / invoke subs funtion */
	printf("the diff of two number is: %f\n", diff);
}



/* 
 * this is definition of function substract (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is diff of p and q (return value)
 */
float subs(float p, float q)

{
	return (p - q);
}
