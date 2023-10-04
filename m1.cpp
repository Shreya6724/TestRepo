/* File Name: m1.cpp
* Programmer: Shreya Vipulbhai Patel
* Program: Seng1000 - Major Assignment 1
* Date: 2023/09/23
* Description: Program that displays characters' and their average ASCII values
*/

#include<stdio.h>
int const kmyInitial = 's'; //using constant for my initial
int main(void)
{
	//declaring and initialising the integer variables
	int tot = 0; //sum for running total
	int avg = 0; //average for running total
	int alpha = 1; //a to z alphabets for the while loop and average
	int num = 0; //ASCII value of the alphabets

	while (alpha < 27) //loop from a to z
	{
		num = alpha + 96;
		tot = tot + num; //getting sum via running total
		avg = tot / alpha; //getting average via running total
		if (num == kmyInitial)
		{
			printf("%c\t%d\n", num, avg); //to print average of ascii value at my initial
		}
		else
		{
			printf("%c\t%c\n", num, num); //to print other alphabets
		}
		alpha++; //using post increment to increase alphabet by one value at the end of the loop
	}
}