#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int numberone, numbertwo, result;
	char operator;
	
	printf("Please enter a expression :;;:");
	scanf("%d %c %d", &numberone, &operator, &numbertwo);
	
	switch (operator)
	{
		case '+':
			result = add(numberone, numbertwo);
			break;
		case '-':
			result = sub(numberone, numbertwo);
			break;
		case '*':
			result = multi(numberone, numbertwo);
			break;
		case '/':
			result = div(numberone, numbertwo);
			break;
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
int add(int numberone, int numbertwo)
{
	//TODO implementation
	return 0;
}
 
int sub(int numberone, int numbertwo)
{
	//TODO implementation
	return 0;
}
 
int multi(int numberone, int numbertwo)
{
	return numberone * numbertwo;
}
 
int div(int numberone, int numbertwo)
{
	//TODO implementation
	return 0;
}