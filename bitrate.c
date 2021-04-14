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

	char filetype;
	float filesize;
	float megabytes;
	float gigabytes;
	float megabits;
	float bitrate;
	double totalSeconds;

	printf("Enter Duration hh:mm:ss\nEnter hh\n");

	scanf("%i", &hours);

	printf("Enter mm\n");
	scanf("%i", &minutes);

	printf("Enter ss\n");
	scanf("%i", &seconds);

	//Separate second digit from first digit
	secondDigit = hours % 10;
	hours = hours / 10;
	firstDigit = hours % 10;

	fourthDigit = minutes % 10;
	minutes = minutes / 10;
	thirdDigit = minutes % 10;

	sixthDigit = seconds % 10;
	seconds = seconds / 10;
	fifthDigit = seconds % 10;

	//Calculate total seconds given duration
	totalSeconds = firstDigit * 36000 + secondDigit * 3600 + thirdDigit * 600 + fourthDigit * 60 + fifthDigit * 10 + sixthDigit;
	//printf("TOTAL SECONDS IS %f\n", totalSeconds);

	//Receive Filesize
	do {
		printf("Filesize: Enter g for gigabytes or m for megabytes\n");
		scanf(" %c", &filetype);
	} while (filetype != 'm' && filetype != 'g');
	//asks to input until answer is either m or g,

	if (filetype == 'm')
	{
		printf("How many megabytes?\n");
		scanf("%f", &megabytes);
		megabits = megabytes * 8;
	}
	if (filetype == 'g')
	{
		printf("How many gigabytes?\n");
		scanf("%f", &gigabytes);
		megabytes = gigabytes * 1000;
		megabits = megabytes * 8;
	}
	//final fun :))
	bitrate = megabits / totalSeconds;
	printf("Bitrate is about %.2fMbps\n", bitrate);
	return 0;
}
