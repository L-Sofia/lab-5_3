#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5_3(recur)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest153
{
	TEST_CLASS(UnitTest153)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p;
			p = t(-7);
			Assert::AreEqual(p, 4.05486, 0.0001);
		}
	};
}
