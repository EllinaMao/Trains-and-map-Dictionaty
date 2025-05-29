#include "Dictiotary.h"

void Dictionary::searchWord(const std::string& word) const
{
    auto it = words.find(word);
    if (it != words.end()) {
        std::cout << "Word: " << it->first << "\nDefinition: " << it->second << std::endl << std::string(15, '-') << std::endl;
    }
    else {
		throw WordNotFound();
    }
}

void Dictionary::saveToFile(const std::string& filename) const  
{  
    json j;  

    for (auto it = words.cbegin(); it != words.cend(); ++it) {  
        j[it->first] = it->second;  
    }  

    std::ofstream file(filename);  
    if (file.is_open()) {  
        file << j.dump(4);  
        file.close();  
    }  
    else {  
        throw FileCantOpen();  
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
		throw FileNotFound();
    }
}

void Dictionary::getWords(std::vector<std::string>& wordList) const
{
    for (auto it = words.cbegin(); it != words.cend(); ++it) {
        wordList.push_back(it->first);
    }
}