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


		int top_length, left_length, area;

		// Get user input for top and left lengths
		printf("Enter the top length of the square: ");
		scanf_s("%d", &topLength);
		printf("Enter the left length of the square: ");
		scanf_s("%d", &leftLength);

		// Multiply top and left lengths to get the area of the square
		area = topLength * leftLength;
		result = printf("\nThe area of the square is: %d\n", area);

	}
	else if (topLength == botLength && leftLength == rightLength) {
		printf("\nThe area of rectangle with sides %d and %d", topLength, leftLength);
		printf("\narea :  %d units\n", GetRectangleArea(topLength, botLength, leftLength, rightLength));
		result = "\nRectangle\n\n";
	}

	else 
		result = "Not a Rectangle";

		return result;
}

int GetRectangleArea(int topLength, int bothLength, int leftLength, int rightLength)
{
	int area = 0;

	int length_1 = topLength * bothLength;
	int length_2 = leftLength * rightLength;

	area = length_1 * length_2;

	return area;

}