#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double population = 6763;
	double rate = 0.0118;
	double newPop = population;
	double newPop2 = population;
	double newpow = 1;
	int p;
	int year;
	
	printf("%15s%30s%25s\n","Year from now","Population(in millions)","Increase(in millions)" );
	for (year = 1; year <= 75; year++)
	{
		newPop2 = newPop;
		for (p = 0; p < year; p++)
		{
			newpow = newpow*(1+rate);
		}
		newPop = population*newpow;
		printf("%15d%30.2f%25.2f\n",year,newPop,newPop-newPop2);
		newpow = 1;
	}
	system("pause");
	return 0;
}