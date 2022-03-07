#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define SEED time(NULL)

int main() {

 srand( SEED );
 int i, count, interval = 10000000;
 double x_circle,y_square,z,pi;

 //printf("interval = ");
 //scanf("%d", &interval);

 count = 0;

 for(i = 0; i < interval; ++i) {

     x_circle = (double)rand() / RAND_MAX;

     y_square = (double)rand() / RAND_MAX;

     z = x_circle * x_circle + y_square * y_square;

     if( z <= 1 ) count++;
 }

 pi = (double) count / interval * 4;
 
 printf("Approximate PI = %g", pi);

 return(0);
}