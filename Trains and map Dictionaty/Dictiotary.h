#pragma once  
#include <iostream>  
#include <string>  
#include <map>  
#include <nlohmann/json.hpp>  
#include <fstream> 
#include "Errors.h"

using json = nlohmann::json; 
class Dictionary {  
private:  
    std::map<std::string, std::string, std::less<>> words;
public:  
    void addWord(const std::string& word, const std::string& definition) {  
        words[word] = definition;  
    }  

    void removeWord(const std::string& word) {  
        words.erase(word);  
    }  

    void editWord(const std::string& word, const std::string& newDefinition) {  
        words[word] = newDefinition;  
    }  

    void searchWord(const std::string& word) const;

    void saveToFile(const std::string& filename) const;

    void loadFromFile(const std::string& filename);

    void getWords(std::vector<std::string>& wordList) const;

    void clear() {  
        words.clear();  
    }  
    size_t size() const {  
        return words.size();  
    }  
    bool isEmpty() const {  
        return words.empty();  
    }  
    void printAllWords() const {  
        for (auto it = words.begin(); it != words.end(); ++it) {
            std::cout << "Word: " << it->first << "\nDefinition: " << it->second << std::endl
                << std::string(15, '-') << std::endl;
        }
	}
};
