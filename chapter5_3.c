#include <stdio.h>

/*
Ex3
Modify the broker.c program of Section 5.2 by making both of the following changes:
(a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade
(b) Add statements that compute the commission charged by a rival broker($33 plus 3c per share for fewer than 2000shares; $33 plus 2c per share for 2000 shares or more). Display the rival's commission as well as the commission charged by the original broker
*/

int main(void)
{
	int shares;
	float price, value; 
	printf("Enter the number of shares : ");	
	scanf("%d",&shares);
	printf("Enter the price per share : ");
	scanf("%f",&price);
	value = price * shares;
	/*
	rival's commission
	*/
	float commission;	
	if (shares < 2000)
		commission = 33.00f + 0.03f * shares;
	else
		commission = 33.00f + 0.02f * shares;
	printf("rival's commission : %f\n",commission);	
	/*
	original commission
	*/
	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)	
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value; 
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;
	printf("original commission : %f\n", commission);
	printf("value : %f",value);
	return 0;
}
