//
// Created by he_da on 9/6/23.
//
#include "TextWordReplacer.h"

TextWordReplacer::TextWordReplacer() {
    // Populate the replacement map with words and their generic counterparts
    replacementMap["Mercedes-Benz"] = "MB";
    replacementMap["favorite"] = "fav";
    // Add more words as needed
}

std::string TextWordReplacer::replaceWithGenericWords(const std::string& input) {
    std::string output = input;
    for (const auto& pair : replacementMap) {
        size_t pos = output.find(pair.first);
        while (pos != std::string::npos) {
            output.replace(pos, pair.first.length(), pair.second);
            pos = output.find(pair.first, pos + pair.second.length());
        }
    }
    return output;
}
