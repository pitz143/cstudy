#include<stdio.h>

/* 
 * this is declaration of function multiply (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is multi of p and q (return value)
 */
float multi(float p, float q);

/* this is main function  */
void main()
{
        float a, b, times;
        printf("enter first  number: \n");
        scanf("%f", &a);
        printf("enter second number: \n");
        scanf("%f", &b);
        times = multi(a, b);  /* call / invoke multiply funtion */
        printf("the multiply of two number is: %f\n", times);
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

