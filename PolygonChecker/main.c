#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include "triangleSolver.h"

int side = 0;


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
            //printf_s("! %d\n", triangleSidesPtr[0]);
            char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
            printf_s("%s\n", result);
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