#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab13.2.1\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = MAX(ABS(-3), 2);
			Assert::AreEqual(a, 3);
		}
	};
}
