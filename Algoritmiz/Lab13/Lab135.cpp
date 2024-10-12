#include <iostream>
#include <string>

struct drug {
    std::string name;
    int price;
    std::string out_of_date;
};

struct pharmacy {
    std::string pharmacy_name;
    int count_of_drugs;
    drug* drugs;
};

struct city {
    std::string name;
    int count_of_pharmacies;
    pharmacy* pharmacies;
};

int main() {
    int city_count;
    std::cin >> city_count;
    city* cities = new city[city_count];

    for (int i = 0; i < city_count; i++) {
        std::cin >> cities[i].name;
        std::cout << "City: " << cities[i].name 
        << std::endl;
        std::cin >> cities[i].count_of_pharmacies;
        cities[i].pharmacies = new pharmacy[cities[i].count_of_pharmacies];
        double citysum = 0;

        for (int j = 0; j < cities[i].count_of_pharmacies; j++) {
            std::cin >> cities[i].pharmacies[j].pharmacy_name;
            std::cin >> cities[i].pharmacies[j].count_of_drugs;
            cities[i].pharmacies[j].drugs = new drug[cities[i].pharmacies[j].count_of_drugs];

            double pharmacysum = 0;

            for (int k = 0; k < cities[i].pharmacies[j].count_of_drugs; k++) {
                std::cin >> cities[i].pharmacies[j].drugs[k].name;
                std::cin >> cities[i].pharmacies[j].drugs[k].price;
                pharmacysum += cities[i].pharmacies[j].drugs[k].price;
                std::cin >> cities[i].pharmacies[j].drugs[k].out_of_date;
            } 
            std::cout << "Average of " << cities[i].pharmacies[j].pharmacy_name << " is " 
                      << pharmacysum / cities[i].pharmacies[j].count_of_drugs << std::endl;
            citysum += pharmacysum / cities[i].pharmacies[j].count_of_drugs;
        }
        if (cities[i].count_of_pharmacies) {
            std::cout << "AVERAGE OF PRICE OF " << cities[i].name << ": " << citysum / cities[i].count_of_pharmacies 
            << std::endl;
        } 
        else {
            std::cout << "AVERAGE OF PRICE OF " << cities[i].name << ": " << 0 
            << std::endl;
        }
        std::cout << std::endl;
    }
}