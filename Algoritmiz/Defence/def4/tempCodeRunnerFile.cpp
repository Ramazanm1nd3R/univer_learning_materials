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
