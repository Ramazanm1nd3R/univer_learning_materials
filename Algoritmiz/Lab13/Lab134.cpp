#include <iostream>
#include <string>

struct participant {
    std::string name;
    int produce_food;
    int eat_food;
};  

struct camp {
    std::string tite;
    int food_amount;
    int participants_amount;
    participant* participants;
};

int main(){
    int camp_count;
    std::cin >> camp_count;
    camp* camps = new camp[camp_count];
    for (int i = 0; i < camp_count; i++){
        std::cin >> camps[i].tite;
        std::cin >> camps[i].food_amount;
        std::cin >> camps[i].participants_amount;
        camps[i].participants = new participant[camps[i].participants_amount];

        for (int j = 0; j < camps[i].participants_amount; j++){
            std::cin >> camps[i].participants[j].name;
            std::cin >> camps[i].participants[j].eat_food;
            std::cin >> camps[i].participants[j].produce_food;
        }
    }

    for (int i = 0; i < camp_count; i++){
        int food = camps[i].food_amount;
        for (int j = 0; j < camps[i].participants_amount; j++){
            food += camps[i].participants[j].produce_food * 12;
            food -= camps[i].participants[j].eat_food * 12;
        }

        if (food >= 0){
            std::cout << camps[i].tite << std::endl;
        }
    }
}

