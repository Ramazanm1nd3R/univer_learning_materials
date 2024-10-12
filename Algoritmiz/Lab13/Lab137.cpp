#include <iostream>
#include <string>

struct flat {
    std::string flat_name;
    int price;
    int room;
};

struct city {
    std::string city_name;
    int flat_count;
    flat* flats;
};

int main(){
    int city_num;
    std::cin >> city_num;
    city* cities = new city[city_num];
    for (int i = 0; i < city_num; i++){
        std::cin >> cities[i].city_name;
        std::cin >> cities[i].flat_count;
        cities[i].flats = new flat[cities[i].flat_count];

        for (int j = 0; j < cities[i].flat_count; j++){
            std::cin >> cities[i].flats[j].flat_name;
            std::cin >> cities[i].flats[j].price;
            std::cin >> cities[i].flats[j].room;
        }
    }
    for (int i = 0; i < city_num; i++){
        int minprice = -1;
        int maxprice = -1;
        
        for (int j = 0; j < cities[i].flat_count; j++){
            if (cities[i].flats[j].price > maxprice || maxprice == -1){
                maxprice = cities[i].flats[j].price;
            }
            if (cities[i].flats[j].price < minprice || minprice == -1){
                minprice = cities[i].flats[j].price;
            }
        }
        std::cout << cities[i].city_name << " - " << maxprice - minprice 
        << std::endl;
    }
}