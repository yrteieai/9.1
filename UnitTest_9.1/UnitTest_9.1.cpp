#include "pch.h"
#include "CppUnitTest.h"

#include "../9.1/var.h"
#include "../9.1/sum.h"
#include "../9.1/dod.h"
#include "../9.1/var.cpp"
#include "../9.1/sum.cpp"
#include "../9.1/dod.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
    {
    public:

        TEST_METHOD(TestMethodDod)
        {

            x = 0.5;  
            n = 1;
            a = 1.0;  
            dod();    

            double expected_a = -(x * x) / (2 * n * (2 * n - 1));

            Assert::AreEqual(expected_a, a, 0.0001, L"Функція dod обчислює неправильний доданок");
        }

        TEST_METHOD(TestMethodSum)
        {
            x = 0.5;
            e = 0.0001;  
            sum();      

            double expected_s = cos(x);

            Assert::AreEqual(expected_s, s, 0.0001, L"Функція sum обчислює неправильну суму ряду");
        }
    };
}
