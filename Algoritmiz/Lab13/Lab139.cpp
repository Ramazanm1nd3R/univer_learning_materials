#include <iostream>
#include <string>

struct lord {
    std::string lord_name;
    int income;
    bool tax_free;
    bool is_thief;
};

struct kingdom {
    std::string kingdom_name;
    int coffer;
    double tax;
    int lord_count;
    lord* lords;
};

int main() {
    int kingdom_num;
    std::cin >> kingdom_num;
    kingdom* kingdoms = new kingdom[kingdom_num];

    for (int i = 0; i < kingdom_num; i++) {
        std::cin >> kingdoms[i].kingdom_name;
        std::cin >> kingdoms[i].coffer;
        std::cin >> kingdoms[i].tax;
        std::cin >> kingdoms[i].lord_count;
        kingdoms[i].lords = new lord[kingdoms[i].lord_count];

        for (int j = 0; j < kingdoms[i].lord_count; j++) {
            std::cin.ignore(); 
            std::getline(std::cin, kingdoms[i].lords[j].lord_name);
            std::cin >> kingdoms[i].lords[j].income;
            std::cin >> kingdoms[i].lords[j].tax_free;
            std::cin >> kingdoms[i].lords[j].is_thief;
            std::cin.ignore();

            if (kingdoms[i].lords[j].tax_free == 0 && kingdoms[i].lords[j].is_thief == 0){
                kingdoms[i].coffer += kingdoms[i].lords[j].income * kingdoms[i].tax;
            }
            else if (kingdoms[i].lords[j].is_thief == 1){
                kingdoms[i].coffer -= kingdoms[i].lords[j].income;
            }
        }
    } 
    for (int i = 0; i < kingdom_num - 1; i++){
        for (int j = 0; j < kingdom_num - i - 1; j++){
            if (kingdoms[j].coffer < kingdoms[j + 1].coffer){
                kingdom tututu = kingdoms[j];
                kingdoms[j] = kingdoms[j + 1];
                kingdoms[j + 1] = tututu;
            }
        }
    }

    for (int i = 0; i < kingdom_num; i++){
        std::cout << kingdoms[i].kingdom_name << " - " 
        << kingdoms[i].coffer 
        << std::endl;
    }
}





