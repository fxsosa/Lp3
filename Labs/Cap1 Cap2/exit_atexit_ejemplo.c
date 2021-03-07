#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function prototypes
void showDateAndTime(void);

// *************************************************************

int main(int argc, char *argv[]) {
	char *pathPtr;

	if (argc != 3) {
		printf("Debe pasar como argumento los nros a dividir\n");
		exit(0);
	}
	
	double value;
	int status;

	status = atexit(showDateAndTime);
	if (status != 0) {
		fprintf(stderr, "Error: Failed to install exit handler\n");
		exit(1);
	} // End if
	
	value =  atof(argv[1])/atof(argv[2])	;
	printf("Resultado: %f\n",value);
	printf("Normal process termination\n");
	exit(0);
} // End main

void showDateAndTime(void) {
	time_t currentTime;

	currentTime = time(NULL);
	printf("End. Current date and time: %s\n", ctime(&currentTime));
} // End showDateAndTime
