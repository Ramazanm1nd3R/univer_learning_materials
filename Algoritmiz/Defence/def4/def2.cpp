//1
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);

    if (str.length() <= 7) {
        if (std::isalpha(str[0]) && std::isalpha(str[4]) && std::isalpha(str[5]) && std::isalpha(str[6])) {
            if (std::isdigit(str[1]) && std::isdigit(str[2]) && std::isdigit(str[3])) {
                std::cout << "YES";
            } else {
                std::cout << "WELL";
            }
        } else {
            std::cout << "WELL";
        }
    } else {
        std::cout << "WELL";
    }
}

//1.2
#include <iostream>
#include <string>
int main(){
    std::string str;
    bool correct = true;
    std::getline(std::cin, str);
    if (str.length() <= 7){
        for (int i = 0; i < 7; i++){
            if (i == 0 || (i >= 4 && i <= 6) && std::isalpha(str[i])){
            }
            else if ((i <= 3 && i >= 1) && std::isdigit(str[i])){

            }
            else {
                correct = false;
                break;
            }
        }
        if (correct){
            std::cout << "YES";
        }
        else {
            std::cout << "WELL";
        }
    }
    else {
        std::cout << "WELL";
    }
}

//2
#include <iostream>
#include <string>
int main(){
    std::string str, word;
    std::getline(std::cin, str);
    std::getline(std::cin, word);
    int counter = 0;
    size_t findword = str.find(word);
    while (findword != std::string::npos){
        counter++;
        findword = str.find(word, findword + 1);
    }
    std::cout << counter;
}


//3
#include <iostream>
#include <string>

struct student {
    std::string name;
    int math, english, program;
};

int main() {
    int a;
    std::cin >> a;
    std::cin.ignore();
    std::cout.precision(2);

    for (int i = 0; i < a; i++) {
        student s;
        std::getline(std::cin, s.name);
        std::cin >> s.math >> s.english >> s.program;
        std::cin.ignore();

        float avg = (s.math + s.english + s.program) / 3.0;
        if (avg >= 4) {
            std::cout << s.name << " " << std::fixed << avg << std::endl;
        }
    }
}

