#include "gtest/gtest.h"
#include "UniquePtr.hpp"
#include <string>

// Jest klasą szablonową
// Trzyma wskaźnik do zarządzanego obiektu
// Konstruktor kopiuje wskaźnik
// Destruktor zwalnia pamięć
// Kopiowanie jest niedozwolone
// Przenoszenie jest dozwolone i oznacza:
//     Skopiowanie wskaźnika z obiektu źródłowego
//     Ustawienie wskaźnika w obiekcie źródłowym na nullptr
// Wymagane metody: operator*(), operator->(), get(), release(), reset()
// Nie zapomnij o testach (pokrycie >90%)

class testClassOperatorsAndFunctions {
public:
    testClassOperatorsAndFunctions(int value) : value_(value) {

    }

    int getValue() { return value_; }

private:
    int value_ { };
};

struct UniquePtrTest : public ::testing::Test {
    UniquePtr<int>uniqueTestNull;
    UniquePtr<int>uniqueTestValueInt{ new int(5) };
    UniquePtr<std::string>uniqueTestValueString{ new std::string("TEST") };
    UniquePtr<double>uniqueTestValueDouble{ new double(3.14) };
    UniquePtr<testClassOperatorsAndFunctions>uniqueTestArrowOperator{ new testClassOperatorsAndFunctions(999) };
};

TEST_F(UniquePtrTest, callNewObjectShouldReturnNullptr) {
    auto expected = nullptr;
    ASSERT_EQ(uniqueTestNull.get(), expected);
}

TEST_F(UniquePtrTest, assignValueShouldReturnValueInt) {
    auto expected = 5;
    ASSERT_EQ(*uniqueTestValueInt.get(), expected);
}

TEST_F(UniquePtrTest, assignValueShouldReturnValueString) {
    auto expected = "TEST";
    ASSERT_EQ(*uniqueTestValueString.get(), expected);
}

TEST_F(UniquePtrTest, assignValueShouldReturnValueDouble) {
    auto expected = 3.14;
    ASSERT_EQ(*uniqueTestValueDouble.get(), expected);
}

TEST_F(UniquePtrTest, usingGetValueShouldReturnRightValueInt) {
    auto expected = 999;
    ASSERT_EQ(uniqueTestArrowOperator->getValue(), expected);
}

// TEST_F(UniquePtrTest, usingGetMethodShouldReturnRightPointerCaseTwo) {
//     auto expected = ptr2;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(ptr2, expected);
// }

// TEST_F(UniquePtrTest, usingGetMethodShouldReturnRightPointerCaseThree) {
//     auto expected = ptr3;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(ptr3, expected);
// }

// TEST_F(UniquePtrTest, usingDereferenceOperatorShouldReturnValueInt) {
//     auto expected = 55;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(55, expected);
// }

// TEST_F(UniquePtrTest, usingDereferenceOperatorShouldReturnValueString) {
//     auto expected = "String";
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ("String", expected);
// }

// TEST_F(UniquePtrTest, usingDereferenceOperatorShouldReturnValueDouble) {
//     auto expected = 44.11;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(44.11, expected);
// }

// TEST_F(UniquePtrTest, callingClassMethodShouldReturnInt) {
//     auto expected = 99;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(99, expected);
// }

// TEST_F(UniquePtrTest, callingClassMethodShouldReturnString) {
//     auto expected = "TESt";
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ("TESt", expected);
// }

// TEST_F(UniquePtrTest, callingClassMethodShouldReturnDouble) {
//     auto expected = 22.7777;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(22.7777, expected);
// }

// TEST_F(UniquePtrTest, afterCallingReleaseMethodShouldReturnNullptrCaseOne) {
//     auto expected = nullptr;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(nullptr, expected);
// }

// TEST_F(UniquePtrTest, afterCallingReleaseMethodShouldReturnNullptrCaseTwo) {
//     auto expected = nullptr;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(nullptr, expected);
// }

// TEST_F(UniquePtrTest, afterCallingReleaseMethodShouldReturnNullptrCaseThree) {
//     auto expected = nullptr;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(nullptr, expected);
// }

// TEST_F(UniquePtrTest, afterCallingResetMethodShouldReturnNewCorrectValueCaseOne) {
//     auto expected = 66;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(66, expected);
// }

// TEST_F(UniquePtrTest, afterCallingResetMethodShouldReturnNewCorrectValueCaseTwo) {
//     auto expected = 66.22222;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(99, expected);
// }

// TEST_F(UniquePtrTest, afterCallingResetMethodShouldReturnNewCorrectValueCaseThree) {
//     auto expected = "NewValue";
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ("NewValue", expected);
// }
