#include "rectangleSolver.h"
#include "triangleSolver.h"
#include <stdio.h>
#include <stdlib.h>

char* analyzeRectangle(int *xValue, int *yValue) {
	int topLength = abs(xValue[0] - xValue[1]);
	int botLength = abs(xValue[2], xValue[3]);

	int leftLength = abs(xValue[0] - xValue[1]);
	int rightLength = abs(xValue[2], xValue[3]);
}