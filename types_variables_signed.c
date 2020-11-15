#include <stdio.h>
#include <stdlib.h>


int main()
{
	int mon_int = -12;
	printf("mon int = %d\n et prend en memoire %d octets\n", mon_int, sizeof(int) );

	unsigned int mon_unsigned = 12;
		printf("mon unsigned = %d\n et prend en memoire %d octets\n", mon_unsigned, sizeof(int) );

	char mon_char = 'A';
	printf("mon char = %c\n et prend en memoire %d octets\n", mon_char, sizeof(char));

	float mon_float = 3.1416;
	printf("mon float = %f\n et prend en memoire %d octets\n", mon_float, sizeof(float));

	double mon_double = 12.6;
	printf("mon double = %f\n et prend en memoire %d octets\n", mon_double, sizeof(double));


	return 0;
}
