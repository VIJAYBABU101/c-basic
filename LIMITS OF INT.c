#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short\nsigned\n%hd to %hd", SHRT_MIN, SHRT_MAX);
	printf("\nunsigned\n %hu to %hu", 0, USHRT_MAX);
	
	printf("\n\nint\nsigned\n%d to %d", INT_MIN, INT_MAX);
	printf("\nunsigned\n %u to %u", 0, UINT_MAX);
	
	printf("\n\nlong int\nsigned\n %ld to %ld", LONG_MIN, LONG_MAX);
	printf("\nunsigned\n %lu to %lu", 0, ULONG_MAX);
	
	printf("\n\nlong long int\nsigned\n %lld to %lld", LLONG_MIN, LLONG_MAX);
	printf("\nunsigned\n %llu to %llu", 0, ULLONG_MAX);
}
