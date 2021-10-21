#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-5.3\lab-5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab53
{
	TEST_CLASS(UnitTestlab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = f(0);
			Assert::AreEqual(1., t);
		}
	};
}
