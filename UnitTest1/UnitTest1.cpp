#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_3.2/GraduateStudent.cpp"
#include "../OOP_Lab_3.2/Student.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			GraduateStudent a;
			a.setCourse(3);
			Assert::AreEqual(3, a.getCourse());
		}
	};
}
