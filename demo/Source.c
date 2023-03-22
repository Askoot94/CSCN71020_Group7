
#include <stdio.h>
#include <stdbool.h>

    printWelcome();
int printShapeMenu();
int* getTriangleSides(int* triangleSides);

int side = 0;

int main(){
    bool continueprogram = true;
    while (continueprogram) {
        printWelcome();
        printShapeMenu();

        int shapeChoice;
        printf("/nenter your choice: ");
        if (scanf_s("%d", &shapeChoice) != 1)
        {
            printf("error");
            continue;
        }
        switch (shapeChoice)
        {
        case 1:
            printf_s("Triangle selected.\n");
            int triangleSides[3] = { 0, 0, 0 };
            int* triangleSidesPtr = getTriangleSides(triangleSides);
            //printf_s("! %d\n", triangleSidesPtr[0]);
            //char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
            //printf_s("%s\n", result);
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

    printWelcome() {
    printf_s("\n");
    printf_s(" **********************\n");
    printf_s("**     Welcome to     **\n");
    printf_s("**   Polygon Checker  **\n");
    printf_s(" **********************\n");
}

int printShapeMenu() {
    printf_s("1. Triangle\n");
    printf_s("0. Exit\n");

    int shapeChoice;

    printf_s("Enter number: ");
    scanf_s("%1o", &shapeChoice, sizeof(shapeChoice));

    return shapeChoice;
}

}
