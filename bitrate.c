#include <stdio.h>
#include <ctype.h>

int main (void) {
	//Converts Duration and Filesize into MBps
	int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit, sixthDigit, hours, minutes, seconds;
	firstDigit = 0;
	secondDigit = 0;
	thirdDigit = 0;
	fourthDigit = 0;
	fifthDigit = 0;
	sixthDigit = 0;
/*
	printf("Enter Duration hh:mm:ss\n");
	printf("Enter hh\n");

	scanf("%i", &hours);
	//printf("First Pair is %i\n", firstPair);

	printf("Enter mm\n");
	scanf("%i", &minutes);
	//printf("Second Pair is %i\n", secondPair);

	printf("Enter ss\n");
	scanf("%i", &seconds);
	//printf("Third Pair is %i\n", thirdPair);

	//Separate second digit from first digit
	secondDigit = hours % 10;
	hours = hours / 10;
	firstDigit = hours % 10;
	//printf("First digit is %i\nSecond digit is %i\n", firstDigit, secondDigit);

	fourthDigit = minutes % 10;
	minutes = minutes / 10;
	thirdDigit = minutes % 10;
	//printf("Third digit is %i\nFourth digit is %i\n", thirdDigit, fourthDigit);

	sixthDigit = seconds % 10;
	seconds = seconds / 10;
	fifthDigit = seconds % 10;
	//printf("Fifth digit is %i\nSixth digit is %i\n", fifthDigit, sixthDigit);



*/

	//Receives Filesize

	//ask to input until answer is either g or m,
	char filetype;
	float filesize;
	float megabytes;
	float gigabytes;

	do {
		printf("Filesize: Enter g for gigabytes or m for megabytes\n");
		scanf(" %c", &filetype);
	} while (filetype != 'm' && filetype != 'g');

	if (filetype == 'm')
	{
		printf("How many megabytes?\n");
		scanf("%f", &megabytes);
		printf("%.2f megabytes\n", megabytes);
	}
	if (filetype == 'g')
	{
		printf("How many gigabytes?\n");
		scanf("%f", &gigabytes);
		printf("%.2f gigabytes\n", gigabytes);
	}
	//printf("exit\n");






	//Converts Final Desired size and Duration for Target MBps
}
