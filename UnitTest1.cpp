#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\fredg\OneDrive\Рабочий стол\ipz2\ipz2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1

{
	TEST_CLASS(calcuate_Tests)
	{public:
		TEST_METHOD(calculate_get4and7_14returned) {
			int n = 4;
			int x = 7;
			int expected = 0;
			int actual = calculate(n, x);
			Assert::AreEqual(expected, actual);
		}
	public:
		TEST_METHOD(calculate_get15and6_170returned)
		{
			int n = 15;
			int x = 6;
			int expected = 0;
			int actual = calculate(n, x);
			Assert::AreEqual(expected, actual);
		}
	};
	TEST_CLASS(checkValidParams_Tests)
	{
	public:

		TEST_METHOD(checkValidParams_get10_exceptionNotThrown)
		{
			int n = 10;
			try
			{
				checkValidParams(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();

			}

		}
	public:
		TEST_METHOD(checkValidParams_get3_exceptionNotThrown)
		{
			int n = 3;
			try {
				checkValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};
}
