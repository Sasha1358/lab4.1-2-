#include "pch.h"
#include "CppUnitTest.h"
#include "../lab4.1/Stack.h"
#include "../lab4.1/Stack.cpp"
#include "../lab4.1/Queue.h"
#include "../lab4.1/Queue.cpp"
#include "../lab4.1/List.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Stack stack;
			stack.add(10); // Додаємо елемент до стеку
			Assert::AreEqual(stack.size(), 1);
		}
	};
}
