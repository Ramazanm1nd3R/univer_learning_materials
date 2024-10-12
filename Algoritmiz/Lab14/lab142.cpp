#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream input("task2.html");
    if (!input.is_open()) {
        std::cout << "net";
        return 1;
    }

    std::string line;
    int hCount = 0, pCount = 0, imgCount = 0, aCount = 0;

    while (std::getline(input, line)) {
        // Подсчет элементов: заголовков, параграфов, изображений, ссылок
        if (line.find("<h") != std::string::npos) {
            hCount++;
        } else if (line.find("<p") != std::string::npos) {
            pCount++;
        } else if (line.find("<img") != std::string::npos) {
            imgCount++;
        } else if (line.find("<a") != std::string::npos) {
            aCount++;
        }
    }

    input.close();

    // Вывод статистики
    std::cout << "cout of header: " << hCount << std::endl;
    std::cout << "paragraph: " << pCount << std::endl;
    std::cout << "img: " << imgCount << std::endl;
    std::cout << "link: " << aCount << std::endl;
}