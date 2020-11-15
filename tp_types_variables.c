#include <stdio.h>
#include <stdlib.h>


int main()
{

	printf("TP2: Memoire et variables\n");


	//déclaration des variables
	int mon_int = -12;
	short mon_short = 32;
	long mon_long = 65000;
	float mon_float = 3.1416;
	double mon_double = 325.12;
	char mon_char = 'X';

	//affichage des variables
	printf("mon int = %d et prend en memoire %d octets\n", mon_int, sizeof(int));
	printf("mon short = %d et prend en memoire %d octets\n", mon_short, sizeof(short));
	printf("mon long = %ld et prend en memoire %d octets\n", mon_long, sizeof(long));
	printf("mon float = %f et prend en memoire %d octets\n", mon_float, sizeof(float));
	printf("mon double = %f et prend en memoire %d octets\n", mon_double, sizeof(double));
	printf("mon char = %c et prend en memoire %d octets\n", mon_char, sizeof(char));
	



	return 0;
}
