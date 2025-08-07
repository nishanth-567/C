#include <stdio.h>
int add(int a , int b);
void main()
{
    int n1 = 837;
    int n2 = 999;
    int sum;
    sum = add(n1, n2);
    printf("%d + %d = %d", n1, n2, sum);
}
int add(int a, int b)
{
    int sum = a+b;
    return sum;
}
