//
// Created by he_da on 9/6/23.
//

#pragma once
#include <string>
#include <unordered_map>

class TextWordReplacer {
public:
    TextWordReplacer();
    std::string replaceWithGenericWords(const std::string& input);
private:
    std::unordered_map<std::string, std::string> replacementMap;
};
