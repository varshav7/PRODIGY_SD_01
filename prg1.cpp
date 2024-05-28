#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
void menu();
void continuefunc();
void celtofar(float);
void celtokel(float);
void fartocel(float);
void fartokel(float);
void keltocel(float);
void keltofar(float);
void continuefunc()
{
	char cont;
	printf("\nDo you want to continue? (Y/N)\n");
	scanf("%c",&cont);
	if(cont=='Y'||cont=='y')
	menu();
	else
	exit(0);
}
void celtofar(float cel)
{
	float far;
	far = cel*1.8 + 32;
	printf("\nConverted value from Celsius to Fahrenheit=%f deg.F\n",far);
}
void celtokel(float cel)
{
	float kel;
	kel = cel+273.15;
	printf("\nConverted value from Celsius to Kelvin=%f K\n",kel);
}
void fartocel(float far)
{
	float cel;
	cel=0.55*(far-32);
	printf("\nConverted value from Fahrenheit to Celsius=%f deg.C\n",cel);
}
void fartokel(float far)
{
	float kel;
	kel=(0.55*(far-32))+273.15;
	printf("\nConverted value from Fahrenheit to Kelvin=%f K\n",kel);
}
void keltocel(float kel)
{
	float cel;
	cel=kel-273.15;
	printf("\nConverted value from Kelvin to Celsius=%f deg.C\n",cel);
}
void keltofar(float kel)
{
	float far;
	far=(kel-273.15)*1.8 + 32;
	printf("\nConverted value from Kelvin to Fahrenheit=%f deg.F\n",far);
}
void menu()
{
	char scale;
	float temp;
	printf("\nEnter choice of temperature scale (C/F/K):\t");
	scanf("%c",&scale);
	if(scale!='c'&&scale!='C'&&scale!='k'&&scale!='K'&&scale!='f'&&scale!='F')
	{
		printf("\nInvalid choice, enter only C,F or K");
	    menu();
	}
	printf("Enter tempretaure value to be converted:\t");
	scanf("%f",&temp);
	if(scale=='f'||scale=='F')
	{
		printf("--------------------------------------------");
		fartocel(temp);
		fartokel(temp);
		printf("--------------------------------------------");
	//	continuefunc();
	}
	else if(scale=='c'||scale=='C')
	{
		printf("--------------------------------------------");
		celtofar(temp);
		celtokel(temp);
		printf("--------------------------------------------");
		//continuefunc();
	}
	else if(scale=='k'||scale=='K')
	{
		printf("--------------------------------------------");
		keltocel(temp);
		keltofar(temp);
		printf("--------------------------------------------");
		//continuefunc();
	}
}
int main()
{
	menu();
	continuefunc();
}
