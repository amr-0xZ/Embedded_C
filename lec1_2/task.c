/*
Author: Amr Zakaria
Task: Write a C program that initializes, manipulates, and displays an 8-bit unsigned sensor reading.
*/
//including outer library for the printf function.
#include <stdio.h>
int main(){
	
	//decliration and initialization of a unsigned 1byte = 8bits char variable, range => 0 : 255.
	unsigned char sinsor_reading = 250;
	unsigned char max_safe_temp = 200;
	
	//decliration and initialization of a signed 2byte = 16bits int variable, range => -2^15 : 2^15-1.
	signed short int temp_deference = sinsor_reading - max_safe_temp;
	
	//chick if the temperature is in the safe range.
	if(temp_deference <= 0){
		printf("You are good.");
	}else{
		printf("You are overheated.");
	}
	
	//return 0 to endicate the end of the program.
	return 0;
}