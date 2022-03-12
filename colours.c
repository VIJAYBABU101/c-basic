#include<stdio.h>
int main()
{
	char code;
	scanf("%c",&code);
	if(code=='V' || code=='v')
	printf("Voilet");
	else if(code=='I' || code=='i')
	printf("Indigo");
	else if(code=='B' || code=='b')
	printf("Blue");
	else if(code=='G' || code=='g')
	printf("Green");
	else if(code=='Y' || code=='y')
	printf("Yellow");
	else if(code=='O' || code=='o')
	printf("Orange");
	else if(code=='R' || code=='r')
	printf("Red");
	else
	printf("invalid code");
	return 0;
}
