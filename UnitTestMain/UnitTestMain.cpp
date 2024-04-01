#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include"..\UnitTestsDemo\UnitTestsDemo.cpp"

#include<string>


namespace Категория_тестов
{
	TEST_CLASS(тесьтовый_блок)
	{
	public:
		
		TEST_METHOD(конкретный_тестовый_эпизод)
		{

		}

		TEST_METHOD (SimpleSumm)
		{
			Summ(0, 0);
			Assert::AreEqual(
				std::to_string(0).c_str(),
				std::to_string(Summ(0,0)).c_str(),
				std::string("cant call").c_str()
			);
		}
	};
}
//