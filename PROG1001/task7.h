#pragma once

//Internal includes
#include <stdio.h>
#include <math.h>

//External includes


// Structures
struct Task7
{
	int num1;
	int num2;
	int num3;

	float fNum1;
	float fNum2;
};

//***************************************************************************

// Function declerations
void updateShapeInt(struct Task7* _shape, int _num1, int _num2, int _num3);
int caclulateSumInt(struct Task7* _shape);
int calculateAverageInt(int _value);
int calculateSquareInt(int _value);

void updateShapeFloat(struct Task7* _shape, float _num1, float _num2);
float caclulateSumFloat(struct Task7* _shape);
float calculateAverageFloat(float _value);
float calculateSquareFloat(float _value);


//***************************************************************************

// Exe for header file
void W35_Run()
{
	printf("Running Week35\n---------------------------------------\n\n");

	//Declerations
	struct Task7 Square;
	updateShapeInt(&Square, 33, 3, 3);
	updateShapeFloat(&Square, 6.0f, 8.0f);
	calculateSquareInt(calculateAverageInt(caclulateSumInt(&Square))); 
	calculateSquareFloat(calculateAverageFloat(caclulateSumFloat(&Square)));

	printf("\n");
}

//***************************************************************************

void updateShapeInt(struct Task7* _shape, int _num1, int _num2, int _num3)
{
	_shape->num1 = _num1;
	_shape->num2 = _num2;
	_shape->num3 = _num3;

	int display[3] = { _shape->num1, _shape->num2, _shape->num3 };

	printf("Updating Shape\n-------------\n");
	for (int i = 0; i < (sizeof(display) / sizeof(display[0])); ++i)
	{
		if (display[i] < 0)
		{
			printf("A negative integer detected at index %d = %d \nExiting function...\n\n", i, display[i]);
			return;
		}
		printf("Number %d is: %d\n", i, display[i]);
	}
	printf("-------------\nUpdating Shape complete\n\n");
	return;
}

int calculateAverageInt(int _value)
{
	printf("Calculating Average\n-------------\n");

	int average = (_value) / 3;

	printf("Average of %d is: %d\n",_value,  average);
	printf("-------------\nCalculating Average complete\n\n");

	return average;
}

int caclulateSumInt(struct Task7* _shape)
{
	int sum = (_shape->num1 + _shape->num2 + _shape->num3);

	printf("Calculating Sum\n-------------\n");
	printf("Sum is: %d \n", sum);
	printf("-------------\nCalculating sum complete\n\n");

	return sum;
}

int calculateSquareInt(int _value)
{
	printf("Calculating Square\n-------------\n");

	double square = (pow(_value, 3));

	printf("Square of %d is: %f\n",_value,  square);

	printf("-------------\nCalculating Square complete\n\n");

	return (int)square;
}


void updateShapeFloat(struct Task7* _shape, float _num1, float _num2)
{
	_shape->fNum1 = _num1;
	_shape->fNum2 = _num2;

	int display[2] = { _shape->num1, _shape->num2};

	printf("Updating Shape\n-------------\n");
	for (int i = 0; i < (sizeof(display) / sizeof(display[0])); ++i)
	{
		if (display[i] < 0)
		{
			printf("A negative float detected at index %d = %d \nExiting function...\n\n", i, display[i]);
			return;
		}
		printf("Number %d is: %d\n", i, display[i]);
	}
	printf("-------------\nUpdating Shape complete\n\n");
	return;
}

float calculateAverageFloat(float _value)
{
	printf("Calculating Average\n-------------\n");

	float average = (_value) / 3.0f;

	printf("Average of %f is: %f\n", _value, average);
	printf("-------------\nCalculating Average complete\n\n");

	return average;
}

float caclulateSumFloat(struct Task7* _shape)
{
	float sum = (_shape->fNum1 + _shape->fNum2 );

	printf("Calculating Sum\n-------------\n");
	printf("Sum is: %f \n", sum);
	printf("-------------\nCalculating sum complete\n\n");

	return sum;
}

float calculateSquareFloat(float _value)
{
	printf("Calculating Square\n-------------\n");

	double square = (pow(_value, 3));

	printf("Square of %f is: %f\n", _value, (float)square);

	printf("-------------\nCalculating Square complete\n\n");

	return (float)square;
}