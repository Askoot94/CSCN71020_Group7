#include "pch.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" char* analyzeTriangle(int side1, int side2, int side3);
extern "C" int GetRectanglePerimeter(int topLength, int botLength, int leftLength, int rightLength);
extern "C" char* analyzeRectangle(int[]);
extern "C" void getRectangleSides(int*);
extern "C" char* analyzeTriangle(int side1, int side2, int side3);
extern "C" double* getTriangleAngles(int* triangleSides, double* triangleAngles);
extern "C" int GetRectangleArea(int, int);


namespace Group7CollectiveTestSuite
{
	TEST_CLASS(RianTestSuite)
	{
	public:
		TEST_METHOD(ShapeIdentification1)
		{
			//Checking the Function can Identify Squares
			char* expected = "\nSquare\n\n";
			int SideLengths[4] = { 4, 4, 4, 4 };
			char* result = analyzeRectangle(SideLengths);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(ShapeIdentification2)
		{
			//Checking the Function can Identify Rectangles
			char* expected = "\nRectangle\n\n";
			int SideLengths[4] = { 4, 4, 2, 2 };
			char* result = analyzeRectangle(SideLengths);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(ShapeIdentification3)
		{
			//Checking the Function can Identify  given points is not a Rectangle or Square
			char* expected = "Not a Rectangle";
			int SideLengths[4] = { 4, 1, 3, 4 };
			char* result = analyzeRectangle(SideLengths);
			Assert::AreEqual(expected, result);
		}
	};
	TEST_CLASS(YinusTestSuite)
	{
	public:

		TEST_METHOD(Triangle_Angle_1)
		{
			//Checking if the function identifies if the angles provided by user are wrong 
			int triangleSides[3] = { 5, 5, 5 };
			double triangleAngles[3];
			getTriangleAngles(triangleSides, triangleAngles);
			Assert::AreNotEqual(66.00, triangleAngles[0]);
			Assert::AreNotEqual(90.00, triangleAngles[1]);
			Assert::AreNotEqual(85.00, triangleAngles[2]);
		}
		TEST_METHOD(Triangle_Angle_2)
		{
			//Checking if the function correctly calculates the angles of the triangle
			int triangleSides[3] = { 3, 4, 5 };
			double triangleAngles[3];
			getTriangleAngles(triangleSides, triangleAngles);
		
	        Assert::AreEqual(36.869897645844013, triangleAngles[0]);
			Assert::AreEqual(53.130102354155980, triangleAngles[1]);
			Assert::AreEqual(90.0000, triangleAngles[2]);
		}
		TEST_METHOD(Triangle_Angle_3)
		{
			//Checking if the function identifies if the angles provided by user are wrong 
			int triangleSides[3] = { 1 ,2 , 1 };
			double triangleAngles[3];
			getTriangleAngles(triangleSides, triangleAngles);
			Assert::AreNotEqual(35.00, triangleAngles[0]);
			Assert::AreNotEqual(70.00, triangleAngles[1]);
			Assert::AreNotEqual(75.00, triangleAngles[2]);
		}
	};
	TEST_CLASS(JoelTestSuite)
	{
	public:

		//test for rectangle with all correct sides 
		TEST_METHOD(Rectangle_Perimeter_1)
		{
			int result = 0;
			int topLength = 2;
			int botLength = 2;
			int leftLength = 4;
			int rightLength = 4;

			result = GetRectanglePerimeter(topLength, botLength, leftLength, rightLength);
			Assert::AreEqual(12, result);
		}

		//test for rectangle with wrong sides
		TEST_METHOD(Rectangle_Perimeter_2)
		{
			int result = 0;
			int topLength = 1;
			int botLength = 1;
			int leftLength = 8;
			int rightLength = 3;

			result = GetRectanglePerimeter(topLength, botLength, leftLength, rightLength);
			Assert::AreEqual(13, result);
		}

		//test for rectangle with correct side but with wrong result
		TEST_METHOD(Rectangle_Perimeter_3)
		{
			int result = 0;
			int topLength = 4;
			int botLength = 4;
			int leftLength = 6;
			int rightLength = 6;

			result = GetRectanglePerimeter(topLength, botLength, leftLength, rightLength);
			Assert::AreNotEqual(12, result);
		}
	};
	//Sorry Git, but if your Tests didn't get commented out Then it'll stop the other tests from performing
	// 
	// *********************************************************************************************************************
	// Unit test on getRectangleSides function isn't running because the compiler is waiting for a user input 
	//  which, therefore stops other test units.
	// *********************************************************************************************************************
	// 
	//TEST_CLASS(GiteshTestSuite)
	//{
	//public:

	//	TEST_METHOD(getRectangleSides_Functionality)
	//	{
	//		int rectangleSides[4] = { 1, 6, 4, 0 };
	//		int expectedRectangleSides[4] = { 1, 6, 4, 0 };

	//		getRectangleSides(rectangleSides); // Call the function

	//		for (int i = 0; i < 4; i++)
	//		{
	//			Assert::AreEqual(rectangleSides[i], expectedRectangleSides[i]); // Compare individual elements
	//		}
	//	}
	//};
	TEST_CLASS(JayTestSuite)
	{
	public:

		TEST_METHOD(Rectangle_area1)
		{
			int topLength = 2;
			int leftLength = 4;

			int result1 = GetRectangleArea(topLength, leftLength);
			Assert::AreEqual(8, result1);
		}
		TEST_METHOD(Rectangle_Area_2)
		{
			
			int topLength = 6;
			int rightLength = 4;

			int result2 = GetRectangleArea(topLength, rightLength);
			Assert::AreEqual(35, result2);
		}
	};
	TEST_CLASS(DonalDTestSuite)
	{
	public:
		// created a test case for don1 and its successfully running
		TEST_METHOD(don1)
		{
			char* expected = "Scalene triangle";
			int side1 = 2;
			int side2 = 3;
			int side3 = 1;

			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual(expected, result);

		}
		// created a test case for don2 and its successfully running
		TEST_METHOD(don2)
		{
			char* expected = "Isosceles triangle";
			int side1 = 2;
			int side2 = 2;
			int side3 = 3;

			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual(expected, result);
		}
		// created a test case for don3 and its successfully running
		TEST_METHOD(don3)
		{
			char* expected = "Equilateral triangle";
			int side1 = 2;
			int side2 = 2;
			int side3 = 2;

			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual(expected, result);
		}
		// created a fail test case for don4 and its successfully running
		TEST_METHOD(don4)
		{
			char* expected = "Isosceles triangle";
			int side1 = 2;
			int side2 = 3;
			int side3 = 4;

			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreNotEqual(expected, result);
		}
		
	};
}
