//q6
#include<stdio.h>
int matchstick(int n)
{
    if (n%5==0) 
	{
        return -1;
    }
	else
	{
        return n%5;
    }
}
int main()
{ 
    int n;
	printf("Enter the number of matches: ");
	scanf("%d", &n);
	matchstick(n);
	int result=matchstick(n);
    if (result==-1) 
	{
        printf("Return -1");
    }
	else
	{
        printf("you should pick %d matchsticks.\n", result);
    }
}
