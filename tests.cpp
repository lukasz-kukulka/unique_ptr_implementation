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

TEST_F(UniquePtrTest, callShouldReturnNullptr) {
    auto expected = nullptr;
    //auto result = engine->getMaxSpeed();
    ASSERT_EQ(nullptr, expected);
}

//tests
// if is null ptr when init
// 5x read data if make_unique
// 3x get()
// 3x *operator
// 5x operator ->
// 3x release()
// 3x reset()

