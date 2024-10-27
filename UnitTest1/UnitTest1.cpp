#include "pch.h"
#include "CppUnitTest.h"
#include "../8.2 string/8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(size_t(0), CountWords(""));
		}
	};
}
