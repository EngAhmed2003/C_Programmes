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
	float R ; // R is the radius
	char Y ; // Y is the User choice
	float Q ; // Q is the User Choice
	double pi=3.141592653589793; // pi is ╥

	printf("Enter The Radius :") ; // Used for display to the user
	fflush(stdout) ; // Used to organize code
	scanf("%f",&R) ; // Used to Used to take input from the user and put it in the address of Y

	printf("a to print area,c to print circumference") ;
	fflush(stdout) ;
	scanf(" %c",&Y) ;

	if (Y=='a') // if User chose (a) Execute if the condition
	{
		Q = pi * pow(R,2) ; // The Equation of Circumference
		printf("Area:%f\n",Q) ;
	}

	else if (Y=='c') // else if User chose (b) Execute if the condition
	{
		Q = (2*pi*R) ; // The Equation of Circumference
		printf("Circumference:%f\n",Q) ;
	}
	else // Other choice print Wrong Choice Please Try Again
	{
		printf("Wrong Choice Please Try Again") ;
	}
}

