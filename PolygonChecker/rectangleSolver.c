#include "rectangleSolver.h"
#include "triangleSolver.h"
#include <stdio.h>
#include <stdlib.h>

char* analyzeRectangle(int *xValue, int *yValue, int rectangleSides[]) {
	char* result = "";
	//Store Lengths of each side in their own variables
	int topLength = abs(xValue[0] - xValue[1]);
	int botLength = abs(xValue[2] - xValue[3]);

	int leftLength = abs(yValue[0] - yValue[3]);
	int rightLength = abs(yValue[1] - yValue[2]);

	//Check that topLength and botLength as well as leftLength and rightLength are equal
	if (topLength == botLength && leftLength == rightLength && topLength == rightLength) {
		
		printf("\nperimeter : %d units\n", GetRectanglePerimeter(topLength, botLength, leftLength, rightLength));
		result = "\nSquare\n\n";
	}
	else if (topLength == botLength && leftLength == rightLength)
	{
		printf("\nThe Perimeter of rectangle with Sides %d and %d ", topLength, leftLength);
		printf("\nperimeter :  %d units\n", GetRectanglePerimeter(topLength, botLength, leftLength, rightLength));
		result = "\nRectangle\n\n";
	}
	else 
		result = "Not a Rectangle";
	
	return result;
}

int GetRectanglePerimeter(int topLength,int botLength, int leftLength, int rightLength)
{
	int perimeter = 0;

	int Length_1 = topLength + botLength;

	int Length_2 = leftLength + rightLength;

	perimeter = Length_1 + Length_2;

	return perimeter;
}