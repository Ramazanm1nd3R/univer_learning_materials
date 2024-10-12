//1

// #include <iostream>
// #include <string>

// struct student{
//     std::string student_name;
//     double gpa;
//     int age;
// };

// struct group{
//     std::string group_name;
//     int student_count;
//     student* students;
// };

// int main(){
//     int group_num;
//     std::cin >> group_num;
//     group* groups = new group[group_num];
//     for (int i = 0; i < group_num; i++){
//         std::cin >> groups[i].group_name;
//         std::cin >> groups[i].student_count;
//         groups[i].students = new student[groups[i].student_count];

//         for (int j = 0; j < groups[i].student_count; j++){
//             std::cin >> groups[i].students[j].student_name;
//             std::cin >> groups[i].students[j].gpa;
//             std::cin >> groups[i].students[j].age;
//         }
//     }

//     for (int i = 0; i < group_num; i++){
//         double checkMaxGpa = 0.0;
//         std::string maxGpaStud;
//         bool checkage = false;
//         for (int j = 0; j < groups[i].student_count; j++){
            
//             if ((checkMaxGpa == 0.0 || groups[i].students[j].gpa > checkMaxGpa) && groups[i].students[j].age >= 18){
//                 checkMaxGpa = groups[i].students[j].gpa;
//                 maxGpaStud = groups[i].students[j].student_name;
//                 checkage = true;
//             }
//         }
//         std::cout << groups[i].group_name << " - " << checkMaxGpa << " " << maxGpaStud 
//         << std::endl;
//     }
// }


//2

// #include <iostream>
// #include <string>

// struct flat {
//     std::string flat_name;
//     int price;
//     int room;
// };

// struct city {
//     std::string city_name;
//     int flat_count;
//     flat* flats;
// };

// int main(){
//     int city_num;
//     std::cin >> city_num;
//     city* cities = new city[city_num];

//     for (int i = 0; i < city_num; i++){
//         std::cin >> cities[i].city_name;
//         std::cin >> cities[i].flat_count;
//         cities[i].flats = new flat[cities[i].flat_count];

//         for (int j = 0; j < cities[i].flat_count; j++){
//             std::cin >> cities[i].flats[j].flat_name;
//             std::cin >> cities[i].flats[j].price;
//             std::cin >> cities[i].flats[j].room;
//         }
//     }

//     for (int i = 0; i < city_num; i++){
//         int cheapflatprice = 0;
//         std::string cheapflatname;
//         bool checkthreeroom = false;
//         for (int j = 0; j < cities[i].flat_count; j++){
//             if ((cities[i].flats[j].price < cheapflatprice || cheapflatprice == 0) && cities[i].flats[j].room == 3){
//                 cheapflatname = cities[i].flats[j].flat_name;
//                 checkthreeroom = true;
//             }
//         }
//         std::cout << cities[i].city_name << std::endl;
//         if (checkthreeroom){
//             std::cout << "Cheapest flat with exactly 3 rooms is - " << cheapflatname << std::endl;
//         }
//         else {
//             std::cout << "No flat with exactly 3 rooms found" << std::endl;
//         }
//     }
// }


//3

// #include <iostream>
// #include <string>

// struct investor {
//     std::string name;
//     int salary;
//     bool invest_free;
// };

// struct company {
//     std::string company_name;
//     int company_cost;
//     int investors_count;
//     investor* investors;
// };

// int main(){
//     int company_num;
//     std::cin >> company_num;
//     company* companies = new company[company_num];

//     for (int i = 0; i < company_num; i++){
//         std::cin >> companies[i].company_name;
//         std::cin >> companies[i].company_cost;
//         std::cin >> companies[i].investors_count;
//         companies[i].investors = new investor[companies[i].investors_count];

//         for (int j = 0; j < companies[i].investors_count; j++){
//             std::cin >> companies[i].investors[j].name;
//             std::cin >> companies[i].investors[j].salary;
//             std::cin >> companies[i].investors[j].invest_free;
//         }
//     }
//     for (int i = 0; i < company_num; i++){
//         int investSUM = 0;
//         for (int j = 0; j < companies[i].investors_count; j++){
//             if (companies[i].investors[j].invest_free == false){
//                 investSUM += (companies[i].investors[j].salary * 0.1) * 3;
//             }
//         }
//         if (investSUM >= companies[i].company_cost){
//             std::cout << companies[i].company_name 
//             << std::endl;
//         }
//     }
// }

//4

// #include <iostream>
// #include <string>

// struct participant {
//     std::string name;
//     int produce_food;
//     int eat_food;
// };

// struct camp {
//     std::string camp_name;
//     int food_count;
//     int participant_count;
//     participant* participants;
// };

// int main() {
//     int camp_num;
//     std::cin >> camp_num;
//     camp* camps = new camp[camp_num];

//     for (int i = 0; i < camp_num; i++) {
//         std::cin >> camps[i].camp_name;
//         std::cin >> camps[i].food_count;
//         std::cin >> camps[i].participant_count;
//         camps[i].participants = new participant[camps[i].participant_count];

//         for (int j = 0; j < camps[i].participant_count; j++) {
//             std::cin >> camps[i].participants[j].name;
//             std::cin >> camps[i].participants[j].eat_food;
//             std::cin >> camps[i].participants[j].produce_food;
//         }
//     }

//     for (int i = 0; i < camp_num; i++) {
//         int food = camps[i].food_count;
//         for (int j = 0; j < camps[i].participant_count; j++) {
//             food += camps[i].participants[j].produce_food * 12;
//             food -= camps[i].participants[j].eat_food * 12;
//         }
//         if (food > 0) {
//             std::cout << camps[i].camp_name << std::endl;
//         }
//     }
// }


//5

// #include <iostream>
// #include <string>

// struct drug {
//     std::string name;
//     int price;
//     std::string out_date;
// };

// struct pharmacy {
//     std::string pharmacy_name;
//     int drugs_count;
//     drug* drugs;
// };

// struct city {
//     std::string city_name;
//     int pharmacy_count;
//     pharmacy* pharmacies;
// };

// int main(){
//     int city_num;
//     std::cin >> city_num;
//     city* cities = new city[city_num];
//     for (int i = 0; i < city_num; i++){
//         std::cin >> cities[i].city_name;
//         std::cin >> cities[i].pharmacy_count;
//         cities[i].pharmacies = new pharmacy[cities[i].pharmacy_count];
//         double citypricesum = 0;

//         for (int j = 0; j < cities[i].pharmacy_count; j++){
//             std::cin >> cities[i].pharmacies[j].pharmacy_name;
//             std::cin >> cities[i].pharmacies[j].drugs_count;
//             cities[i].pharmacies[j].drugs = new drug[cities[i].pharmacies[j].drugs_count];
//             double pharmpricesum = 0;

//             for (int k = 0; k < cities[i].pharmacies[j].drugs_count; k++){
//                 std::cin >> cities[i].pharmacies[j].drugs[k].name;
//                 std::cin >> cities[i].pharmacies[j].drugs[k].price;
//                 pharmpricesum += cities[i].pharmacies[j].drugs[k].price;
//                 std::cin >> cities[i].pharmacies[j].drugs[k].out_date;
//             }
//             std::cout << "Average of " << cities[i].pharmacies[j].pharmacy_name << " is " 
//             << pharmpricesum / cities[i].pharmacies[j].drugs_count 
//             << std::endl;
//             citypricesum += pharmpricesum / cities[i].pharmacies[j].drugs_count;
//         }
        

//         if (cities[i].pharmacy_count){
//             std::cout << "AVERAGE OF PRICE OF " << cities[i].city_name << ": " 
//             << citypricesum / cities[i].pharmacy_count 
//             << std::endl;
//         }
//         else {
//             std::cout << "AVERAGE OF PRICE OF " << cities[i].city_name << ": " <<0 
//             << std::endl;
//         }
//         std::cout << std::endl;
//     }
// }


//6

#include <iostream>
#include <string>

struct student {
    std::string student_name;
    double student_gpa;
    bool grant;
};

struct group {
    std::string group_name;
    int count;
    student* students;
};

int main() {
    int group_num;
    std::cin >> group_num;
    std::cout.precision(2);
    std::cout << std::fixed;
    group* groups = new group[group_num];

    for (int i = 0; i < group_num; i++) {
        std::cin >> groups[i].group_name;
        std::cin >> groups[i].count;
        groups[i].students = new student[groups[i].count];

        for (int j = 0; j < groups[i].count; j++) {
            std::cin >> groups[i].students[j].student_name;
            std::cin >> groups[i].students[j].student_gpa;
            std::cin >> std::boolalpha >> groups[i].students[j].grant;
        }
    }

    for (int i = 0; i < group_num; i++) {
        double avgGPAcalc = 0;
        double tutu = 0;
        
        for (int j = 0; j < groups[i].count; j++) {
            if (groups[i].students[j].grant) {
                avgGPAcalc += groups[i].students[j].student_gpa;
                tutu++;
            }
        }
        
        if (tutu > 0) {
            std::cout << groups[i].group_name << ": Average is " << avgGPAcalc / tutu 
            << std::endl;
        } else {
            std::cout << groups[i].group_name << ": No students with a grant" << std::endl;
        }
    }
}

//8
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


//9

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