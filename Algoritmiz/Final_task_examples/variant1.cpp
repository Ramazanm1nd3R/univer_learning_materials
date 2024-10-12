// 1

// #include <iostream>
// #include <string>

// struct Candidate{
//     std::string name;
//     int money;
//     double procent;
//     bool elite;
// };

// int main(){
//     int sum, candidate_num;
//     std::cin >> sum;
//     std::cin >> candidate_num;

//     int totalsum = 0;
//     Candidate* candidates = new Candidate[candidate_num];

//     for (int i = 0; i < candidate_num; i++){
//         std::cin >> candidates[i].name;
//         std::cin >> candidates[i].money;
//         std::cin >> candidates[i].procent;
//         std::cin >> candidates[i].elite;
//     }

//     for (int i = 0; i < candidate_num; i++){
//         if (candidates[i].elite){
//             std::cout << candidates[i].name << std::endl;
//         }
//         if (candidates[i].elite == false && candidates[i].procent >= 10){
//             if (candidates[i].procent == 100){
//                 totalsum += candidates[i].money;
//                 std::cout << candidates[i].name << std::endl;
//             }
//             else if (candidates[i].procent < 100){
//                 totalsum += int(candidates[i].money * (candidates[i].procent / 100.0));
//                 std::cout << candidates[i].name << std::endl;
//             }
//         }
//     }
//     if (totalsum >= sum) {
//         std::cout << "Open" << std::endl;
//     } else {
//         std::cout << "No cash" << std::endl;
//     }
// }










//2

// #include <iostream>
// #include <string>

// struct project{
//     std::string project_name;
//     std::string project_type;
//     int cost;
//     int income;
// };

// struct company{
//     std::string company_name;
//     std::string company_tyoe;
//     int budget;
//     double procent;
// };

// int main(){
//     int comp_num;
//     std::cin >> comp_num;
//     company* companies = new company[comp_num];
//     for (int i = 0; i < comp_num; i++){
//         std::cin >> companies[i].company_name;
//         std::cin >> companies[i].company_tyoe;
//         std::cin >> companies[i].budget;
//         std::cin >> companies[i].procent;
//     }

    
// }









//3

// #include <iostream>
// #include <string>

// struct ant{
//     std::string ant_name;
//     int productivity;
//     int battery_spent;
//     bool hacked;
// };


// struct colony{
//     std::string colony_name;
//     int max_plan;
//     int battery_amount;
//     int ants_count;
//     ant* ants;
// };

// int main(){
//     int colony_num;
//     std::cin >> colony_num;
//     colony* colonies = new colony[colony_num];

//     for (int i = 0; i < colony_num; i++){
//         std::cin >> colonies[i].colony_name;
//         std::cin >> colonies[i].max_plan;
//         std::cin >> colonies[i].battery_amount;
//         std::cin >> colonies[i].ants_count;
//         colonies[i].ants = new ant[colonies[i].ants_count];

//         for (int j = 0; j < colonies[i].ants_count; j++){
//             std::cin >> colonies[i].ants[j].ant_name;
//             std::cin >> colonies[i].ants[j].productivity;
//             std::cin >> colonies[i].ants[j].battery_spent;
//             std::cin >> colonies[i].ants[j].hacked;
//         }
//     }
//     int productsum = 0;
//     int maxplancheck = 0;
//     for (int i = 0; i < colony_num; i++){
//         for (int j = 0; j < colonies[i].ants_count; j++){
//             if (colonies[i].ants[j].hacked == false && colonies[i].battery_amount >= colonies[i].ants[j].battery_spent 
//             && (maxplancheck + colonies[i].ants[j].productivity) < colonies[i].max_plan){
//                 productsum += colonies[i].ants[j].productivity;
//                 colonies[i].battery_amount -= colonies[i].ants[j].battery_spent;
//                 maxplancheck += colonies[i].ants[j].productivity;
//             }
//             else if (colonies[i].ants[j].hacked == true && colonies[i].battery_amount >= colonies[i].ants[j].battery_spent){
//                 productsum -= colonies[i].ants[j].productivity;
//                 colonies[i].battery_amount -= colonies[i].ants[j].battery_spent;
//             }
//         }
//     }
// }







#include <iostream>
#include <string>

struct Ant {
    std::string ant_name;
    int productivity;
    int battery_spent;
    bool hacked;
};

struct Colony {
    std::string colony_name;
    int max_plan;
    int battery_amount;
    int ants_count;
    Ant* ants;
};

int main() {
    int colony_num;
    std::cin >> colony_num;
    Colony* colonies = new Colony[colony_num];

    int total_tunnels = 0;

    for (int i = 0; i < colony_num; i++) {
        std::cin >> colonies[i].colony_name;
        std::cin >> colonies[i].max_plan;
        std::cin >> colonies[i].battery_amount;
        std::cin >> colonies[i].ants_count;
        colonies[i].ants = new Ant[colonies[i].ants_count];

        int max_plan_check = 0;

        for (int j = 0; j < colonies[i].ants_count; j++) {
            std::cin >> colonies[i].ants[j].ant_name;
            std::cin >> colonies[i].ants[j].productivity;
            std::cin >> colonies[i].ants[j].battery_spent;
            std::cin >> colonies[i].ants[j].hacked;

            if (!colonies[i].ants[j].hacked &&
                colonies[i].battery_amount >= colonies[i].ants[j].battery_spent &&
                (max_plan_check + colonies[i].ants[j].productivity) < colonies[i].max_plan) {
                total_tunnels += colonies[i].ants[j].productivity;
                colonies[i].battery_amount -= colonies[i].ants[j].battery_spent;
                max_plan_check += colonies[i].ants[j].productivity;
            }
        }
    }
    std::cout << "Total tunnels: " << total_tunnels;
}











#include <iostream>
#include <string>

int main() {
    std::string fullname;
    std::getline(std::cin, fullname);
    size_t space = fullname.find(' ');

    if (space != std::string::npos) {
        std::string lastName = fullname.substr(0, space);
        std::cout << lastName << std::endl;
    }
        if (space != std::string::npos) {
        std::string lastName = fullname.substr(space + 1);
        std::cout << lastName;
    }

}
