#include <iostream>
int main() {
    std::string a;
    std::getline(std::cin, a);
    size_t lsp = a.find_last_of("\\/"), ldp = a.find_last_of('.');
    
    if (lsp == std::string::npos) {
        std::cout << "error";
    }
    else if (ldp == std::string::npos) {
        std::cout << "error";
    } 
    else if (ldp < lsp) {
        std::cout << "error";
    } 
    else {
        std::string fileName = a.substr(lsp + 1, ldp - lsp - 1);
        std::cout << fileName;
    }
}


    // if (lsp == std::string::npos || ldp == std::string::npos || ldp < lsp) {
    //     std::cout << "error";
    // } 
    // else {
    //     std::string fileName = a.substr(lsp + 1, ldp - lsp - 1);
    //     std::cout << fileName;
    // }





#include <iostream>
#include <string>

int main() {
    std::string fullFilename;
    std::cout << "Enter the full filename: ";
    std::getline(std::cin, fullFilename);

    // Находим последний вхождение символа '/' (разделитель директорий) или '\\'
    size_t lastSlash = fullFilename.find_last_of("/\\");
    
    // Находим последнее вхождение символа '.' (точка) после последнего слэша
    size_t lastDot = fullFilename.find_last_of('.');
    
    // Проверяем, что последний слэш и точка найдены
    if (lastSlash != std::string::npos && lastDot != std::string::npos) {
        // Проверяем, что точка идет после последнего слэша
        if (lastDot > lastSlash) {
            // Извлекаем имя файла (без расширения)
            std::string filename = fullFilename.substr(lastSlash + 1, lastDot - lastSlash - 1);
            std::cout << filename;
        } 
        else {
            std::cout << "error";
        }
    } 
    else {
        std::cout << "error";
    }
}







#include <iostream>
#include <string>

int main() {
    std::string fullFilename;
    std::getline(std::cin, fullFilename); // внедрение строки

    // нахождение послтеднего вхождение символа '/' разделитель директорий или '\\'
    size_t lastSlash = fullFilename.find_last_of("/\\");
    
    // Находим последнее вхождение символа '.' (точка) после последнего слэша
    size_t lastDot = fullFilename.find_last_of('.');
    
    // Проверяе, что последний слэш и точка найдены
    if (lastSlash != std::string::npos && lastDot != std::string::npos) {
        // Проверяем, что точка идет после последнего слэша
        if (lastDot > lastSlash) {
            std::string filename = fullFilename.substr(lastSlash + 1, lastDot - lastSlash - 1); // Извлечение имени файла без расширения
            std::cout << filename;
        } 
        else {
            std::cout << "error";
        }
    } 
    else {
        std::cout << "error";
    }
}
