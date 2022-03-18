#include<stdio.h>
int main()
{
	char ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
		printf("vowels");
		break;
		default:
		printf("consonants");
		break;		
	}
}
