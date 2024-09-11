#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//declare int and strings
	char input_name[20];
	char age_stp[4];
	int age;

	// Get name input
	printf("What is your name: ");
	scanf("%s", input_name);


	// Get age input
	printf("What is your age: ");
	scanf("%s", age_stp);

	// Convert the string to an int
	age = atoi(age_stp);

	// Print out results
	printf("%s is %d years old. \n", input_name, age);

	return 0;

}
