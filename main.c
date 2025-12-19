#include "Bibliotheque.h" 
#include<stdio.h>
#include<math.h>
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
unsigned int result = 1; 
while ( value > 1 ) { 
result *= value; 
value --; 
} 
return result; 
} 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 
if ( pow == 0 ) return 1; 
if ( pow == 1 ) return value; 
int accumulator = 1; 
while( pow > 0 ) { 
accumulator *= value; 
pow--; 
}; 
return accumulator; 
} 
void permutation(int *a, int *b){
      int  c=0;
        c=*a;
       *a=*b;
       *b=c;
    }

void hello(){
  float a, b, c, d, racd, x_0, x_1, x_2;

  printf("Entrez le nombre a \n");
    scanf("%f",&a);
  
//
  if (a==0)
    {
    printf("a ne peut pas etre inferieur a 0");
    }   
    else{
    printf("Entrez le nombre b \n");
        scanf("%f",&b);
  printf("Entrez le nombre c \n");
    scanf("%f",&c);
        d=(b*b)-(4*a*c);
  printf("le determinant est %f \n",d);
    if (d<0)
    {
    printf("le discrimiant est inferieur a 0. Pas de solution dans R\n");
    } 
    else if (d==0)
    {
      x_0=-b/(2*a);
    printf("le discrimiant est nul \n la solution est %f\n", x_0);
    }
    else {    
      x_1=(-b-sqrt(d))/(2*a);
      x_2=(-b+sqrt(d))/(2*a);
      racd=sqrt(d),
    printf("La racine du discrimiant est: %f\n",racd);
    printf("Le discrimiant est superieur a 0. Les deux solutions sont: %f et %f \n", x_1, x_2);
    };    
}}
