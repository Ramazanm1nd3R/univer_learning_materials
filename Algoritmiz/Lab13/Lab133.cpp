#include <iostream>
#include <string>

struct investor {
    std::string name;
    int salary;
    bool invest_free;
};

struct company {
    std::string conpany_name;
    int cost;
    int investors_number;
    investor* investors;
};

int main(){
    int company_count;
    std::cin >> company_count;
    company* companies = new company[company_count];
    for (int i = 0; i < company_count; i++){
        std::cin >> companies[i].conpany_name;
        std::cin >> companies[i].cost;
        std::cin >> companies[i].investors_number;
        companies[i].investors = new investor[companies[i].investors_number];

        for (int j = 0; j < companies[i].investors_number; j++){
            std::cin >> companies[i].investors[j].name;
            std::cin >> companies[i].investors[j].salary;
            std::cin >> companies[i].investors[j].invest_free;
        }
    }
    
    for (int i = 0; i < company_count; i++){
        int investitionsum = 0;
        for (int j = 0; j < companies[i].investors_number; j++){
            if (companies[i].investors[j].invest_free == false){
                int tt = 3 * (companies[i].investors[j].salary * 0.1);
                investitionsum += tt; 
            }
        }

        if (investitionsum >= companies[i].cost){
            std::cout << companies[i].conpany_name 
            << std::endl;
        }
    }
}




