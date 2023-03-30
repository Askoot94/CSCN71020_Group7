#define _CRT_SECURE_NO_WARNINGS
#include "rectangleSolver.h"
#include "triangleSolver.h"
#include <stdio.h>
#include <stdlib.h>

char* analyzeRectangle(int* xValue, int* yValue, int rectangleSides[]) {
	char* result = "";
	//Store Lengths of each side in their own variables
	int topLength = abs(xValue[0] - xValue[1]);
	int botLength = abs(xValue[2] - xValue[3]);

	int leftLength = abs(yValue[0] - yValue[3]);
	int rightLength = abs(yValue[1] - yValue[2]);

	//Check that topLength and botLength as well as leftLength and rightLength are equal
	if (topLength == botLength && leftLength == rightLength && topLength == rightLength) {

		

		// Multiply top and left lengths to get the area of the square
		int area = topLength * leftLength;
		result = printf("\nThe area of the square is: %d\n", area);

	}
	else if (topLength ==rightLength) {
		printf("\nThe area of rectangle with sides %d and %d", topLength,rightLength);
		printf("\narea :  %d units\n", GetRectangleArea(topLength, rightLength));
		int area = topLength *rightLength;
		result = printf("\nThe area of the rectangle is: %d\n", area);
		area  = "\nRectangle\n\n";
	}

	else 
		result = "Not a Rectangle";

		return result;
}

int GetRectangleArea(int topLength,  int rightLength)
{
	int area = 0;

	int length_1 = topLength * rightLength;

	area = topLength * rightLength;

	return area;

}