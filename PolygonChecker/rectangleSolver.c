#define _CRT_SECURE_NO_WARNINGS
#include "rectangleSolver.h"
#include "triangleSolver.h"


char* analyzeRectangle(int rectangleSides[]) {
	char* result = "";
	int topLength = rectangleSides[0];
	int botLength = rectangleSides[1];

	int leftLength = rectangleSides[2];
	int rightLength = rectangleSides[3];
	//Check that topLength and botLength as well as leftLength and rightLength are equal
	if (topLength == botLength && leftLength == rightLength && topLength == rightLength) {
		printf("\nA polygon with 4 side lengths of %d units has\n", topLength);
		printf("Area: %d units\n", GetRectangleArea(topLength, rightLength));
		printf("Perimeter : %d units\n", GetRectanglePerimeter(topLength, botLength, leftLength, rightLength));
		result = "\nSquare\n\n";

	}
	else if (topLength == botLength && leftLength == rightLength) {
		printf("\nA polygon with 4 sides, 2 measuring %d units and the other 2 measuring %d units has\n", topLength,rightLength);
		printf("Area:  %d units\n", GetRectangleArea(topLength, rightLength));
		printf("Perimeter :  %d units\n", GetRectanglePerimeter(topLength, botLength, leftLength, rightLength));
		result  = "\nRectangle\n\n";
	}
	else {
		printf("\nA polygon with 4 sides, measuring %d units, %d units, %d units, and %d units has\n", topLength, botLength, leftLength, rightLength);
		printf("Perimeter :  %d units\n", GetRectanglePerimeter(topLength, botLength, leftLength, rightLength));
		result = "Not a Rectangle";
	}

	return result;
}


int GetRectangleArea(int topLength,  int rightLength)
{
	int area = topLength * rightLength;
	
  return area;
}

int GetRectanglePerimeter(int topLength,int botLength, int leftLength, int rightLength)
{
	int perimeter = 0;
	int Length_1 = topLength + botLength;
	int Length_2 = leftLength + rightLength;
	perimeter = Length_1 + Length_2;

	return perimeter;

}