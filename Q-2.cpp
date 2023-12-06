#include<stdio.h>
#include<conio.h>

int main(void){
float c, sum;
	printf("Convert tempreture from degree Celcius to Fahrenheit\n\n");

	printf("Enter thr tempretur in celcius:");
	scanf("%f",&c);
	sum=(c*9/5)+32;
	printf("The tempreture in Ferhanheit is %0.2f",sum);


}
