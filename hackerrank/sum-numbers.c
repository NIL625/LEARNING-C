//Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

//Declare  variables: two of type int and two of type float.
//Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
//Use the  and  operator to perform the following operations:
//Print the sum and difference of two int variable on a new line.
//Print the sum and difference of two float variable rounded to one decimal place on a new line.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m, n;
    float a, b;
    scanf("%d %d", &m, &n);
    scanf("%f %f", &a, &b);
    
    printf("%d %d", m+n, m-n);
    printf("\n");
    printf("%.1f %.1f", a+b, a-b);
    return 0;
}
