#pragma once  
#include <string>  
#include <map>  
#include <vector>  

/*  
Задание 2  
Используя контейнер map реализовать программу — словарь.  
Основные возможности:  

поиск слова;  
добавление, удаление, редактирование слов;  
чтение и запись словаря в файл.  
*/  

class Dictionary {  
private:  
    std::map<std::string, std::string, std::less<>> words; // Словарь: слово и его определение  
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
};
