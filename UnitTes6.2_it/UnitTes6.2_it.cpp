// Unit-тест до завдання 6.2 (ітераційний спосіб). Варіант 20
// Функція обчислює середнє арифметичне індексів парних елементів.
#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2_it/Pr6.2_it.cpp"      // шлях і назву файлу змініть на свої

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:

		TEST_METHOD(TestAverage)
		{
			// парні елементи на індексах 1, 3, 5 -> (1 + 3 + 5) / 3 = 3
			int a[6] = { 1, 2, 3, 4, 5, 6 };
			double t = AverageIndexEven(a, 6);
			Assert::AreEqual(3.0, t, 1e-9);
		}

		TEST_METHOD(TestAverageNegativeAndZero)
		{
			// -4, 0, -2 - парні, індекси 0, 2, 4 -> 6 / 3 = 2
			int a[5] = { -4, 1, 0, 3, -2 };
			double t = AverageIndexEven(a, 5);
			Assert::AreEqual(2.0, t, 1e-9);
		}

		TEST_METHOD(TestAverageFraction)
		{
			// парні на індексах 0, 1, 3 -> 4 / 3
			int a[4] = { 2, 4, 1, 6 };
			double t = AverageIndexEven(a, 4);
			Assert::AreEqual(4.0 / 3.0, t, 1e-9);
		}

		TEST_METHOD(TestNoEven)
		{
			// парних елементів немає - функція повертає 0
			int a[4] = { 1, 3, -5, 7 };
			double t = AverageIndexEven(a, 4);
			Assert::AreEqual(0.0, t, 1e-9);
		}
	};
}
