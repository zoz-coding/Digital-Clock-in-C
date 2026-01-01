#include "libs.h"

// functions //
int input_seconds(int *sec) {
	printf("Enter the number of seconds : ");
	scanf("%d", sec);
}

int input_minutes(int *min) {
	printf("\nEnter the number of minutes : ");
	scanf("%d", min);
}

int input_hours(int *hours) {
	printf("\nEnter the number of hours : ");
	scanf("%d", hours);
}
// end functions //

int main() {
	// variables //
	int sec = 0, min = 0, hours = 0;
	// end variables //

	// input processes //
	input_seconds(&sec);
	input_minutes(&min);
	input_hours(&hours);
	// end input processes //

	while(true) {
		system("cls");
		printf("%02d : %02d : %02d\n", hours, min, sec);

		sec++;

		// conditions //
		if(sec >= 60) {
			sec = 0;
			min++;
		}
		if(min >= 60) {
			min = 0;
			hours++;
		}
		if(hours >= 24) {
			hours = 0;
		}	
		// end conditions //
	
		sleep(1);
	}
}
