#include <iostream>
#include <string>

struct builder {
    std::string builders_name;
    std::string builders_type;
    int builder_speed;
};

struct tower {
    std::string tower_title;
    std::string tower_type;
    int floors;
    int builder_count;
    int days_to_build;
    builder* builders;                                                              
};

int main() {
    int tower_num;
    std::cin >> tower_num;
    std::cin.ignore();
    tower* towers = new tower[tower_num];

    for (int i = 0; i < tower_num; i++) {
        getline(std::cin >> std::ws, towers[i].tower_title);
        std::cin >> towers[i].tower_type; 
        std::cin >> towers[i].floors; 
        std::cin >> towers[i].builder_count;
        towers[i].builders = new builder[towers[i].builder_count];
        int day = 0;
        for (int j = 0; j < towers[i].builder_count; j++) {
            std::cin >> towers[i].builders[j].builders_name; 
            std::cin >> towers[i].builders[j].builders_type; 
            std::cin >> towers[i].builders[j].builder_speed;
        }
        while (towers[i].floors > 0) {
            if (towers[i].builders[day % towers[i].builder_count].builders_type == towers[i].tower_type) {
                towers[i].floors -= towers[i].builders[day % towers[i].builder_count].builder_speed * 2;
            } 
            else {
                towers[i].floors -= towers[i].builders[day % towers[i].builder_count].builder_speed;
            }
            day++;
        }
        towers[i].days_to_build = day; 
    }

    for (int i = 0; i < tower_num; i++) {
        std::cout << towers[i].tower_title << " was built by " << towers[i].days_to_build << " days " 
        << std::endl;
    }
}