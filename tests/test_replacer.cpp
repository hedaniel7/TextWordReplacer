//
// Created by he_da on 9/6/23.
//
#include "TextWordReplacer.h"
#include <iostream>
#include <cassert>

void testReplaceWithGenericWords() {
    TextWordReplacer replacer;

    std::string input1 = "Favorite fAVorite favoRite is good good";
    std::string expectedOutput1 = "fav fav fav is good good";
    assert(replacer.replaceWithGenericWords(input1) == expectedOutput1);

    std::string input2 = "Mercedes-Benz and MERCEDES-BENZ are car brands";
    std::string expectedOutput2 = "MB and MB are car brands";
    assert(replacer.replaceWithGenericWords(input2) == expectedOutput2);

    std::string input3 = "I have a favorite car and a Favorite bike";
    std::string expectedOutput3 = "I have a fav car and a fav bike";
    assert(replacer.replaceWithGenericWords(input3) == expectedOutput3);

    std::cout << "testReplaceWithGenericWords passed!" << std::endl;
}

int main() {
    testReplaceWithGenericWords();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
