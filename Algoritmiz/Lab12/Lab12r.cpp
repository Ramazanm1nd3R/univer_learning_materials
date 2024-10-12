//2
#include <iostream>
#include <string>
struct student
{
    std::string name;
    double math, english, program;
};

int main(){
    int a;
    std::cin >> a;
    std::cout.precision(2);
    for (int i = 0; i < a; i++){
        student x;
        std::cin >> x.name >> x.math >> x.english >> x.program;
        double avg = (x.math + x.english + x.program) / 3.0;
        std::cout << x.name << " " << avg;
    }
}



















// int main(){
//     int a;
//     std::cin >> a;
//     std::cin.ignore();
//     std::cout.precision(2);
//     for (int i = 0; i < a; i++){
//         student s;
//         std::getline(std::cin, s.name);
//         std::cin >> s.math >> s.eglish >> s.program;
//         std::cin.ignore();
//         float avg = (s.math + s.eglish + s.program) / 3.0;
//         if (avg >= 4){
//             std::cout << s.name << " " << std::fixed << avg << std::endl;
//         }
//     }
// }

//3
#include <iostream>
#include <string>
struct student
{
    std::string name;
    double avg, scholship;
};

int main(){
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++){
        student x;
        std::cin >> x.name >> x.avg >> x.scholship;
        if (x.avg > 4.5){
            x.scholship *= 1.3;
        }
        else if (x.avg < 2){
            continue;
        }
        else {
            x.scholship *= 1.1;
        }
         std::cout << x.name << " " << x.scholship << " " << x.avg << std::endl;
    }
}

//4
#include <iostream>
#include <string>
struct book
{
    std::string name, author, type;
    double price; 
};

int main(){
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++){
        book x;
        std::cin >> x.name >> x.author >> x.price >> x.type;
        if (x.type == "classic"){
            x.price *= 0.9;
        }
        else if (x.type == "bestseller"){
            x.price *= 1.2;
        }
        std::cout << x.name << " " << x.author << " " << x.price;
    }
}

//5
#include <iostream>
#include <string>
struct Candidate {
    std::string name, work;
    int mony;
};
int main() {
    int a;
    std::cin >> a;
    std::cin.ignore();

    for (int i = 0; i < a; i++) {
        Candidate x;
        std::getline(std::cin, x.name);
        std::cin >> x.work >> x.mony;
        std::cin.ignore();
        if (x.work != "banker" && x.mony >= 1000 && x.name.substr(x.name.find(' ') + 1) != "Johnson" && x.name.substr(111x.name.find(' ') + 1) != "Edisson") {
            std::cout << x.name << std::endl;
        }
    }
}

