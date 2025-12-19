#include<stdio.h>
#include<stdlib.h>
#include "Bibliotheque.h"

int main( void ) { 
int result = power( 2, 3 ); 
printf( "2³ == %d\n", result ); 
result = fact( 6 ); 
printf( "6! == %d\n", result ); 

int first=16;
int second=20;

printf("first=%d # second=%d \n", first,second);
permutation(&first,&second);
printf("first= %d # second= %d\n",first,second);
printf("################################# \n");
printf("Equation du second degre \n");
hello();
return EXIT_SUCCESS;
}