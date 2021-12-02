#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab13.2\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int nod = NOD(2, 600, 250);
			Assert::AreEqual(nod, 50);
		}
	};
}
