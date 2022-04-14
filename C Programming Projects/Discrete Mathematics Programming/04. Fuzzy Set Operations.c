//Write a C program to find to implement fuzzy set operations.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float min(float a, float b);
float max(float a, float b);
int main()
{
	float fa, fb, fi, fu, fac;
	float
	 x=1.0;
	printf("Enter membership function of first set:\n");
	scanf("%f", &fa);
	printf("Enter membership function of second set:\n");
	scanf("%f", &fb);
	fi=min(fa, fb);
	fu=max(fa, fb);
	fac=x-fa;
	printf("The membership function of intersection=%0.1f .\n", fi);
//	min no between two sets
	printf("The membership function of union=%0.1f .\n", fu);
//	max no between two sets
	printf("The membership function of complement of first set=%0.1f .\n", fac);
//	complement of first set: 1-fa
return 0;
}

float min(float a, float b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

float max(float a, float b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
