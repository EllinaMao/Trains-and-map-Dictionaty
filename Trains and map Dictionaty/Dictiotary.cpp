#include "Dictiotary.h"

void Dictionary::searchWord(const std::string& word) const
{
    auto it = words.find(word);
    if (it != words.end()) {
        std::cout << "Word: " << it->first << ", Definition: " << it->second << std::endl;
    }
    else {
        std::cout << "Word not found." << std::endl;
    }
}

void Dictionary::saveToFile(const std::string& filename) const
{
    json j;
    for (const auto& pair : words) {
        j[pair.first] = pair.second;
    }
    std::ofstream file(filename);
    if (file.is_open()) {
        file << j.dump(4);
        file.close();
    }
    else {
        std::cerr << "Could not open file for writing." << std::endl;
    }
}

void Dictionary::loadFromFile(const std::string& filename)
{
    std::ifstream file(filename);
    if (file.is_open()) {
        json j;
        file >> j;
        for (auto& el : j.items()) {
            words[el.key()] = el.value();
        }
        file.close();
    }
    else {
        std::cerr << "Could not open file for reading." << std::endl;
    }
}

void Dictionary::getWords(std::vector<std::string>& wordList) const
{
    for (const auto& pair : words) {
        wordList.push_back(pair.first);
    }
}