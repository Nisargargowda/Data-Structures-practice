#include<stdio.h>
#include<conio.h>
int fibo(int n);
void main()
{
    int pos,i;
    clrscr();
    printf("Enter the required position value of fibonacci series = ");
    scanf("%d",&pos);
    printf("Fibonacci series till postion %d are :\n",pos);
    for(i=0;i<pos;i++)
    printf("%d\t",fibo(i));
    getch();
}
int fibo(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fibo(n-1)+fibo(n-2));
}