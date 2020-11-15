#include <stdio.h>
#include <stdlib.h>


int main()
{
	int mon_int = 12;
	int taille_int = sizeof(int);	//permet de savoir combien d'octets est réservé en mémoire
	printf("mon int = %d\n et prend en memoire %d octets\n", mon_int, taille_int );

	char mon_char = 'A';
	printf("mon char = %c\n et prend en memoire %d octets\n", mon_char, sizeof(char));

	float mon_float = 3.1416;
	printf("mon float = %f\n et prend en memoire %d octets\n", mon_float, sizeof(float));

	double mon_double = 12.6;
	printf("mon double = %f\n et prend en memoire %d octets\n", mon_double, sizeof(double));


	return 0;
}
