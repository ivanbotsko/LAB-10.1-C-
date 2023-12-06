#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include <fstream>
#include "../PR 10.1/PR 10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(Test)
{
public:
    TEST_METHOD(testCountABC)
    {
        ofstream file("test.txt");
        file << "abc\n";
        file << "abcdefabc\n";
        file << "xyz\n";
        file.close();

        Assert::AreEqual(3, countABC("test.txt"));
    }
};