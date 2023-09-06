//
// Created by he_da on 9/6/23.
//
#include "TextWordReplacer.h"
#include <algorithm>

TextWordReplacer::TextWordReplacer() {
    // Populate the replacement map with words and their generic counterparts
    replacementMap["Mercedes-Benz"] = "MB";
    replacementMap["favorite"] = "fav";
    // Add more words as needed
}

std::string TextWordReplacer::replaceWithGenericWords(const std::string& input) {
    std::string output = input;
    std::string lowercaseInput = input;

    // Convert the input string to lowercase for searching
    std::transform(lowercaseInput.begin(), lowercaseInput.end(), lowercaseInput.begin(), ::tolower);

    for (const auto& pair : replacementMap) {
        std::string lowercaseWord = pair.first;
        std::transform(lowercaseWord.begin(), lowercaseWord.end(), lowercaseWord.begin(), ::tolower);

        size_t pos = lowercaseInput.find(lowercaseWord);
        while (pos != std::string::npos) {
            output.replace(pos, pair.first.length(), pair.second);
            lowercaseInput.replace(pos, pair.first.length(), pair.second); // update the lowercaseInput as well
            pos = lowercaseInput.find(lowercaseWord, pos + pair.second.length());
        }
    }
    return output;
}

