#include <iostream>
#include <string>

struct flat{
    std::string flatname;
    int price;
    int room;  
};
struct city{
    std::string city;
    int flatcount;
    flat* flats;
};

int main(){
    int citynum;
    std::cin >> citynum;
    city* cities = new city[citynum];
    for (int i = 0; i < citynum; i++){
        std::cin >> cities[i].city;
        std::cin >> cities[i].flatcount;
        cities[i].flats = new flat[cities[i].flatcount];

        for (int j = 0; j < cities[i].flatcount; j++){
            std::cin >> cities[i].flats[j].flatname;
            std::cin >> cities[i].flats[j].price;
            std::cin >> cities[i].flats[j].room;
        }
    }
    for (int i = 0; i < citynum; i++){
        bool threeroomcheck = false;
        int minprice = -1;
        std::string optimalflatname;
        for (int j = 0; j < cities[i].flatcount; j++){
            if (cities[i].flats[j].room == 3 && (minprice == -1 || cities[i].flats[j].price < minprice)){
                minprice = cities[i].flats[j].price;
                optimalflatname = cities[i].flats[j].flatname;
                threeroomcheck = true;
            }
            
        }
        std::cout << cities[i].city << std::endl;

        if (threeroomcheck){
            std::cout << "Cheapest flat with exactly 3 rooms is " << optimalflatname 
            << std::endl;
        }
        else {
            std::cout << "No flat with exactly 3 rooms found" 
            << std::endl;
        }
        std::cout << std::endl;
    }
}
