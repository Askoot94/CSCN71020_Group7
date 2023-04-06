#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" char* analyzeTriangle(int side1, int side2, int side3);
extern "C" int GetRectanglePerimeter(int topLength, int botLength, int leftLength, int rightLength);
extern "C" char* analyzeRectangle(int*, int*, int[]);
extern "C" char GetUserNumber();

namespace Group7CollectiveTestSuite
{
	TEST_CLASS(RianTestSuite)
	{
	public:
		TEST_METHOD(ShapeIdentification1)
		{
			//Checking the Function can Identify Squares
			char* expected = "\nSquare\n\n";
			int xValue[4] = { 0,4,0,4 };
			int yValue[4] = { 4,4,0,0 };
			char* result = analyzeRectangle(xValue, yValue, NULL);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(ShapeIdentification2)
		{
			//Checking the Function can Identify Rectangles
			char* expected = "\nRectangle\n\n";
			int xValue[4] = { 0,4,0,4 };
			int yValue[4] = { 3,3,0,0 };
			char* result = analyzeRectangle(xValue, yValue, NULL);
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(ShapeIdentification3)
		{
			//Checking the Function can Identify  given points is not a Rectangle or Square
			char* expected = "Not a Rectangle";
			int xValue[4] = { 0,4,0,4 };
			int yValue[4] = { 3,3,1,0 };
			char* result = analyzeRectangle(xValue, yValue, NULL);
			Assert::AreEqual(expected, result);
		}
	};
	TEST_CLASS(YinusTestSuite)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

		}
	};
	TEST_CLASS(JoelTestSuite)
	{
	public:

		TEST_METHOD(Rectangle_Perimeter_1)
		{
			int result = 0;
			int topLength = 2;
			int botLength = 2;
			int leftLength = 4;
			int rightLength = 4;

			result = GetRectanglePerimeter(topLength, botLength, leftLength,rightLength);
			Assert::AreEqual(12, result);
		}

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
	TEST_CLASS(GiteshTestSuite)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

		}
	};
	TEST_CLASS(JayTestSuite)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
         
		}
	};
	TEST_CLASS(DonalTestSuite)
	{
	public:

		TEST_METHOD(don)
		{
		
		}
	};
}
