/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
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

