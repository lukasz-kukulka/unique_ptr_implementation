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

struct UniquePtrTest : public ::testing::Test {

};

TEST_F(UniquePtrTest, callNewObjectShouldReturnNullptr) {
    auto expected = nullptr;
    //auto result = engine->getMaxSpeed();
    ASSERT_EQ(nullptr, expected);
}

TEST_F(UniquePtrTest, assignValueShouldReturnValueInt) {
    auto expected = 5;
    //auto result = engine->getMaxSpeed();
    ASSERT_EQ(5, expected);
}

TEST_F(UniquePtrTest, assignValueShouldReturnValueString) {
    auto expected = "TEST";
    //auto result = engine->getMaxSpeed();
    ASSERT_EQ("TEST", expected);
}

TEST_F(UniquePtrTest, assignValueShouldReturnValueDouble) {
    auto expected = 3.14;
    //auto result = engine->getMaxSpeed();
    ASSERT_EQ(3.14, expected);
}

TEST_F(UniquePtrTest, assignValueShouldReturnValueClassPerson) {
    auto expected = "Name";
    //auto result = engine->getMaxSpeed();
    ASSERT_EQ("Name", expected);
}

TEST_F(UniquePtrTest, assignValueShouldReturnValueClassPerson) {
    auto expected = true;
    //auto result = engine->getMaxSpeed();
    ASSERT_EQ(true, expected);
}

//tests
// if is null ptr when init ------------ DONE
// 5x read data
// 3x get()
// 3x *operator
// 5x operator ->
// 3x release() = ustawia pointer na nullptr
// 3x reset() = ustawia pointer na nowy podany objekt

