#include <stdio.h>
#include <stdbool.h>

#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	}

	return result;
}
int* anglesinTriangle(int side1, int side2, int side3) {
	int* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = 0;
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Each angle is 60 degrees";
	}
	else if ((side1 == side2 && side1 != side3) ||
		(side1 == side3 && side1 != side2))
	{
		result = "2 angles are equal and the 3rd angle is different";
	}
	else
	{
		result = " The 3 angles are different";
	}
	return result;
}