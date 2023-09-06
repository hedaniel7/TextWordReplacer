//
// Created by he_da on 9/6/23.
//
#include <iostream>
#include "TextWordReplacer.h"

int main() {
    std::cout << "Enter the text you want to replace words in: " << std::endl;
    std::string input;
    std::getline(std::cin, input);

    TextWordReplacer replacer;
    std::string result = replacer.replaceWithGenericWords(input);

    std::cout << "Replaced Text: " << result << std::endl;
    return 0;
}
