#include "gtest/gtest.h"



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

// struct UniquePtrTest : public ::testing::Test {
    
// };

// TEST_F(UniquePtrTest, callNewObjectShouldReturnNullptr) {
//     auto expected = nullptr;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(nullptr, expected);
// }

// TEST_F(UniquePtrTest, assignValueShouldReturnValueInt) {
//     auto expected = 5;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(5, expected);
// }

// TEST_F(UniquePtrTest, assignValueShouldReturnValueString) {
//     auto expected = "TEST";
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ("TEST", expected);
// }

// TEST_F(UniquePtrTest, assignValueShouldReturnValueDouble) {
//     auto expected = 3.14;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(3.14, expected);
// }

// TEST_F(UniquePtrTest, assignValueShouldReturnValueClassPerson) {
//     auto expected = "Name";
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ("Name", expected);
// }

// TEST_F(UniquePtrTest, assignValueShouldReturnValueClassPerson) {
//     auto expected = true;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(true, expected);
// }

// TEST_F(UniquePtrTest, usingGetMethodShouldReturnRightPointerCaseOne) {
//     auto expected = ptr1;
//     //auto result = engine->getMaxSpeed();
//     ASSERT_EQ(ptr1, expected);
// }

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
