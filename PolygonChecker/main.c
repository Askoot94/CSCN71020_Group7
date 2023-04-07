#include <stdio.h>
#include <stdbool.h>
#include "triangleSolver.h"
#include "main.h"
#include "rectangleSolver.h"
#include "GetTriangleAngle.h"



int main(){
    bool continueProgram = true;
    while (continueProgram) {
        printWelcome();
        printShapeMenu();
        int shapeChoice = GetUserNumber();
        switch (shapeChoice)
        {
        case '1':
            printf_s("Triangle selected.\n");
            int triangleSides[3] = { 0, 0, 0 };
            int* triangleSidesPtr = getTriangleSides(triangleSides);
            double triangleAngles[3] = { 0,0,0 };
            double* triangleAnglesPtr = getTriangleAngles(triangleSides, triangleAngles);
            //printf_s("! %d\n", triangleSidesPtr[0]);
            char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
            printf_s("%s\n", result);
            printf("%lf, %lf, %lf\n", triangleAnglesPtr[0], triangleAnglesPtr[1], triangleAnglesPtr[2]);
            break;
        case '2':
            printf_s("Rectangle Selected.\n");
            int RectangleSides[4] = { 0,0,0,0 };
            getRectangleSides(&RectangleSides);
            printf("%s", analyzeRectangle(RectangleSides)); //Will print rectangle type
            break;
        case '0':
            continueProgram = false;
            break;
        default:
            printf_s("Invalid option selected.\n");
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


void printShapeMenu() {
	printf_s("2. Rectangle\n");
	printf_s("1. Triangle\n");
	printf_s("0. Exit\n");
	return;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}

char GetUserNumber() {
    char input;
    printf_s("Enter number: \n");
    bool flag;
    do {
        input = getchar();
        if (input == EOF) {
            printf_s("Please Enter a number: \n");
            flag = false;
        }
        else if (input == NewLine) {
            flag = false;
        }
        else
            flag = true;
    } while (flag == false);

    return input;
}

void getRectangleSides(int* rectangleSides)
{

    int xValue[4] = { 0,0,0,0 };
    int yValue[4] = { 0,0,0,0 };
    printf_s("Enter the four points of the rectangle:\n");
    for (int i = 0; i < 4; i++)
    {
        printf_s("Enter the X value:\n");
        scanf_s("%d", &xValue[i]);

        printf_s("Enter the Y value:\n");
        scanf_s("%d", &yValue[i]);

        printf_s("(%d , %d)\n", xValue[i], yValue[i]);

    }
    //Store Lengths of each side in their own variables
    int topLength = abs(xValue[0] - xValue[1]);
    int botLength = abs(xValue[2] - xValue[3]);

    int leftLength = abs(yValue[0] - yValue[3]);
    int rightLength = abs(yValue[1] - yValue[2]);

    *(rectangleSides) = topLength;
    *(rectangleSides + 1) = botLength;
    *(rectangleSides + 2) = leftLength;
    *(rectangleSides + 3) = rightLength;
 
}
    //Use the rectangle points to determine the sides.
