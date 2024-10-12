#include <iostream>
#include <string>

struct builder {
    std::string name;
    std::string builder_type;
    int builder_speed;
};

struct tower {
    std::string tower_title;
    std::string tower_type;
    int floors;
    int builders_count;
    builder* builders;
    int day_to_build;
};

int main(){
    int tower_num;
    std::cin >> tower_num;
    tower* towers = new tower[tower_num];

    for (int i = 0; i < tower_num; i++){
        std::getline(std::cin >> std::ws, towers[i].tower_title);
        std::cin >> towers[i].tower_type;
        std::cin >> towers[i].floors;
        std::cin >> towers[i].builders_count;
        towers[i].builders = new builder[towers[i].builders_count];
        int day = 0;
        for (int j = 0; j < towers[i].builders_count; j++){
            std::cin >> towers[i].builders[j].name;
            std::cin >> towers[i].builders[j].builder_type;
            std::cin >> towers[i].builders[j].builder_speed;
        }
        while (towers[i].floors > 0) {
            if (towers[i].builders[day % towers[i].builders_count].builder_type == towers[i].tower_type) {
                towers[i].floors -= towers[i].builders[day % towers[i].builders_count].builder_speed * 2;
            } 
            else {
                towers[i].floors -= towers[i].builders[day % towers[i].builders_count].builder_speed;
            }
        day++;
        }
        towers[i].day_to_build = day;
    }
    for (int i = 0; i < tower_num; i++){
        std::cout << towers[i].tower_title << " was built by " << towers[i].day_to_build << " day " 
        << std::endl;
    }
}


