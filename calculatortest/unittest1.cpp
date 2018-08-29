#include "DemoTest.h"
#include "CppUnitTest.h"
#include "iostream"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace Test1
{		

	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(AdditionTest)
		{
			DemoTest test;
			int expected = 5;
			int actual = test.add(3, 2);
			Assert::AreEqual(expected, actual);

		}
	public:
		TEST_METHOD(MultiplicationTest)
		{
			DemoTest test;
			int expected = 6;
			int actual = test.multiply(2, 3);
			Assert::AreEqual(expected, actual);

		}
	public:
		TEST_METHOD(SubstractionTest)
		{
			DemoTest test;
			int expected = 2;
			int actual = test.substract(5, 3);
			Assert::AreEqual(expected, actual);

		}
	public:
		TEST_METHOD(DivisionTest)
		{
			DemoTest test;
			int expected = 4;
			int actual = test.divide(20, 5);
			Assert::AreEqual(expected, actual);

		}

	};
}


