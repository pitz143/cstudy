#include<stdio.h>

/* 
 * this is declaration of function multiply (declaration  also called as prototype)
 * input : two integer p and q (arguement)
 * output : integer which is multi of p and q (return value)
 */
int multi(int p, int q);

/* this is main function  */
void main()
{
        int a, b, times;
        printf("enter first  number: \n");
        scanf("%d", &a);
        printf("enter second number: \n");
        scanf("%d", &b);
        times = multi(a, b);  /* call / invoke multiply funtion */
        printf("the multiply of two number is: %d\n", times);
}



/* 
 * this is definition of function multiply (definition has actual body of function)
 * input : two integer p and q (arguement)
 * output : integer which is multi of p and q (return value)
 */
int multi(int p, int q)
{
        return (p * q);
}

