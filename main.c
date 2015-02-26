#include <stdio.h>

int check();

int main()
{
	int number;
	printf("Введите число\n");
	scanf("%d",&number);
	int delit = (int)check(number);
	if (delit == 1)
	printf("Simple\n");
	else printf("%d\n",delit);
	return 0;
}

int check(int number)
{
	int n = 1;
	for(int i = 2; i <= number / 2; i++)
 {
	if (number % i == 0) n = i;
 }
	return n;
}

