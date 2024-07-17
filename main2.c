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
	float num_1 , num_2 , num_3 ;
	printf("Enter The Values :\n") ;
	fflush(stdout) ;
	scanf("%f %f %f",&num_1,&num_2,&num_3);
	if (num_1 > num_2 && num_1 > num_3)
	{
		printf("%f The largest value is :",num_1);
	}
	else if (num_2 > num_1 && num_2 > num_3)
	{
		printf("%f The largest value is :",num_2);
	}
	else
	{
		printf("%f The largest value is : ",num_3);
	}
	return 0;
}

