#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.Sprint1.Task0.Lib/Tyuiu.KomarovMA.Sprint1.Task0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V01* date = new Service();
			int a = 2;
			int b = 3;
			int c = 1;
			int V;

			V = date->Rezalt(a, b, c);

			Assert::AreEqual(6, V);
		}
	};
}
