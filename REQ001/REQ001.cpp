#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int* length);
extern "C" int setWidth(int input, int* width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:

		TEST_METHOD(getPerimetertest)
		{

			int result = 0;
			int length = 2;
			int width = 2;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(8, result);

		}
		TEST_METHOD(getAreatest)
		{

			int result = 0;
			int length = 2;
			int width = 2;
			result = getArea(&length, &width);
			Assert::AreEqual(4, result);
		}
		TEST_METHOD(setlengthtest001)
		{
			int length = 0;
			int input = 54;
			setLength(input, &length);
			Assert::AreEqual(54, length);
		}
		TEST_METHOD(setlengthtest002)
		{
			int length = 1;
			int input = 99;
			setLength(input, &length);
			Assert::AreEqual(99, length);
		}
		TEST_METHOD(setlengthtest003)
		{
			int length = 4;
			int input = 14;
			setLength(input, &length);
			Assert::AreEqual(14, length);
		}
		TEST_METHOD(setwidthtest001)
		{
			int width = 1;
			int input = 21;
			setLength(input, &width);
			Assert::AreEqual(21, width);
		}
		TEST_METHOD(setwidthtest002)
		{
			int width = 0;
			int input = 6;
			setLength(input, &width);
			Assert::AreEqual(6, width);
		}
		TEST_METHOD(setwidthtest003)
		{
			int width = 5;
			int input = 100;
			setLength(input, &width);
			Assert::AreEqual(14, width);
		}

	};
}
