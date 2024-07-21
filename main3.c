#include <stdio.h>
#include <math.h>

int main (void)
{
	float a , b , minimum ;

	printf("Enter The Two Value :\n") ;

	fflush(stdout) ;

	scanf("%f %f",&a,&b) ;

	minimum = ( a < b ) ? a : b ;

	printf("The Minimum Number is :%f\n ", minimum) ;
}

