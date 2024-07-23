/*Hello World
 * I am Eng.Ahmed Al-Qasabi
 * Bachelor's degree in Mechatronics Engineering
 * I specialized in embedded systems
 * If you have any questions don't hesitate to communicate with me 😊😊
 * https://www.linkedin.com/in/ahmed-al-qasabi-50a1292a4
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
	float r , a , c ;
	double pi = 3.141592653589793 ;
	char y ;

	printf("Enter the Radius :\n") ;
	fflush(stdin) ;fflush(stdout) ;
	scanf("%f" , &r) ;

	printf("a to print area,c to print circumference :\n") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%c" , &y) ;

	switch(y)
	{
	case 'a' :
	case 'A' :
	{
		a = pi * pow(r,2) ;
		printf("The Area is : %f\n ", a ) ;
	}
	break ;
	case 'c' :
	case 'C' :
	{
		c = (2*pi*r) ;
		printf("The circumference is : %f\n ", c ) ;
	}
	break ;
	default :
	{
		printf("Wrong Choice Please Try Again \n") ;
		break;
	}
	}
}

