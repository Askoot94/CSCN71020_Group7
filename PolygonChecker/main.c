#include <stdio.h>
#include <stdbool.h>
#include "triangleSolver.h"
#include "main.h"
#include "rectangleSolver.h"

int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;

		case 2:
			printf_s("Rectangle Selected.\n");
			int xValue[4] = { 0,0,0,0 };
			int yValue[4] = { 0,0,0,0 };
			getRectangleSides(&xValue, &yValue);
			//char* RectangleResult = analyzeRectangle(RectangleSidesptr[0], RectangleSidesptr[1], RectangleSidesptr[2], RectangleSidesptr[3]);
			//printf_s("%s\n", RectangleResult);
			char* result = analyzeRectangle(&xValue, &yValue);

			break;
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("2. Rectangle\n");
	printf_s("1. Triangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}
void getRectangleSides(int* xValue, int* yValue)
{

	printf_s("Enter the four sides of the rectangle:\n");
	for (int i = 0; i < 4; i++)
	{
		printf_s("Enter the X value:\n");
		scanf_s("%d", xValue[i]);

		printf_s("Enter the Y value:\n");
		scanf_s("%d", yValue[i]);

		printf_s("(%d , %d)\n", xValue[i], yValue[i]);
		
	}
}