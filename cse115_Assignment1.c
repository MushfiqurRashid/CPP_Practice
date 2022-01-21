#include<stdio.h>
#include<conio.h>
double harmonicSum(int n);

int main()
{
    int num;
    scanf("%d", &num);
    double ans=harmonicSum(num);
    printf("%f", ans);
}

double harmonicSum(int n)
{
    double i, sum = 0.0;
    for (i = 1; i <= n; i++)
    sum = sum + 1/i;
    return sum;
}
