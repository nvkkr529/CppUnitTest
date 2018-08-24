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
		TEST_METHOD(TestMethod1)
		{
			DemoTest test;
			int t = 3;
			int d = test.add(1, 2);
			cout<<t<<d;
			Assert::AreEqual(t, d);

		}
	public:
		TEST_METHOD(TestMethod2)
		{
			DemoTest test;
			int u = 6;
			int p = test.muliplication(2, 3);
			cout<<u<<p;
			Assert::AreEqual(u, p);

		}
	public:
		TEST_METHOD(TestMethod3)
		{
			DemoTest test;
			int v = 2;
			int q = test.substraction(5, 3);
			cout<<v<<q;
			Assert::AreEqual(v, q);

		}
	public:
		TEST_METHOD(TestMethod4)
		{
			DemoTest test;
			int w = 4;
			int r = test.division(20, 5);
			cout<<w<<r;
			Assert::AreEqual(w, r);

		}

	};
}


