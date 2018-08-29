#include "DemoTest.h"
#include "CppUnitTest.h"
#include "iostream"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace Test1
{		

	TEST_CLASS(UnitTest1)
	{
		DemoTest test;
		int expected;
		int actual;
	public:
		TEST_METHOD(AdditionTest)
		{
			expected = 5;
			actual = test.add(3, 2);
			Assert::AreEqual(expected, actual);

		}
	public:
		TEST_METHOD(MultiplicationTest)
		{
			expected = 7;
			actual = test.multiply(2, 3);
			Assert::AreEqual(expected, actual);

		}
	public:
		TEST_METHOD(SubstractionTest)
		{
			expected = 2;
			actual = test.substract(5, 3);
			Assert::AreEqual(expected, actual);

		}
	public:
		TEST_METHOD(DivisionTest)
		{
			expected = 4;
			actual = test.divide(20, 5);
			Assert::AreEqual(expected, actual);

		}

	};
}


