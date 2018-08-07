/* this program is to do various operation on two numbers in a seperate function */
#include<stdio.h>

/* 
 * this is declaration of all the functions (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is sum of p and q (return value)
 */
float add(float p, float q);
float subs(float p, float q);
float multi(float p, float q);
float div(float p, float q);

/* this is main function  */
void main()
{
	float a, b, ans;
	char ops;
	printf("enter first  number: \n");
	scanf("%f", &a);
	printf("enter second number: \n");
	scanf("%f", &b);
	printf("enter the operators [+, -, *, /]: \n");
	scanf(" %c", &ops); /* extra space in %c is given to avoid the newline */
	if (ops == '+') {
		ans = add(a, b);  /* call / invoke add funtion */
	} else if (ops == '-') {
		ans = subs(a, b);
	} else if (ops == '*') {
		ans = multi(a, b);
	} else if (ops == '/') {
		ans = div(a, b);
	}
	printf("the answer is: %f\n", ans);
	
}



/* 
 * this is definition of function add (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is sum of p and q (return value)
 */
float add(float p, float q)
{
	return (p + q);
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

/* 
 * this is definition of function multiply (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is multi of p and q (return value)
 */
float multi(float p, float q)
{
        return (p * q);
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
