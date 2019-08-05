/* this program is for substract two numbers in a seperate function */
#include<stdio.h>

/* 
 * this is declaration of function substract (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is diff of p and q (return value)
 */
int subs(int p, int q);

/* this is main function  */
void main()
{
	int a, b, diff;
	printf("enter first  number: \n");
	scanf("%d", &a);
	printf("enter second number: \n");
	scanf("%d", &b);
	diff = subs(a, b);  /* call / invoke subs funtion */
	printf("the diff of two number is: %d\n", diff);
}



/* 
 * this is definition of function substract (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is diff of p and q (return value)
 */
int subs(int p, int q)
{
	return (p - q);
}
