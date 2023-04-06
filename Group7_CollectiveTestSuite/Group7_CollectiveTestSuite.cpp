#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);

extern "C" void getRectangleSides(int rectangleSides[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace Group7CollectiveTestSuite
{
	TEST_CLASS(RianTestSuite)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
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

		TEST_METHOD(TestMethod1)
		{

		}
	};
	TEST_CLASS(GiteshTestSuite)
	{
	public:

		TEST_METHOD(getRectangleSides_Functionality)
		{
			int rectangleSides[4] = { 1, 6, 4, 0 };
			int expectedRectangleSides[4] = { 1, 6, 4, 0 };

			getRectangleSides(rectangleSides); // Call the function

			for (int i = 0; i < 4; i++)
			{
				Assert::AreEqual(rectangleSides[i], expectedRectangleSides[i]); // Compare individual elements
			}


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
