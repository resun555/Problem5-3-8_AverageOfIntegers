// Problem5-3-8_AverageOfIntegers.c : Defines the entry point for the console application.
//

#include "stdafx.h"
#define LENGTH 10

#pragma warning( disable : 4996 )


int main()
{
	int integer;
	int sum = 0;
	for (size_t i = 0; i < LENGTH; i++)
	{
		scanf("%d", &integer);
		sum += integer;
	}
	float average = (float)sum / LENGTH;
	printf("%f", average);
    return 0;
}

