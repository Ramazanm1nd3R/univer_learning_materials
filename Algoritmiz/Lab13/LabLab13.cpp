//1
#include <iostream>
#include <string>

struct Student {
    std::string name;
    double gpa;
    int age;
};

struct Group {
    std::string groupname;
    int membercount;
    Student* members;
};

int main() {
    int groupnum;

    std::cin >> groupnum;

    Group* groups = new Group[groupnum];

    for (int i = 0; i < groupnum; ++i) {

        std::cin >> groups[i].groupname;

        std::cin >> groups[i].membercount;

        groups[i].members = new Student[groups[i].membercount];

        for (int j = 0; j < groups[i].membercount; ++j) {
            std::cin >> groups[i].members[j].name;

            std::cin >> groups[i].members[j].gpa;

            std::cin >> groups[i].members[j].age;
        }
    }

    for (int i = 0; i < groupnum; ++i) {
        double maxGPA = 0.0;
        std::string maxGPAStudentName;
        bool agecheck = false;

        for (int j = 0; j < groups[i].membercount; j++) {
            if (groups[i].members[j].gpa > maxGPA && groups[i].members[j].age >= 18) {
                maxGPA = groups[i].members[j].gpa;
                maxGPAStudentName = groups[i].members[j].name;
                agecheck = true;
            }
        }

        if (agecheck) {
            std::cout << "MaxGPA of " << groups[i].groupname << " has " << maxGPAStudentName << std::endl;
        } 
        else {
            std::cout << "No student with max GPA and age >= 18 in group " << groups[i].groupname;
        }
    }
}


//2
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


//3
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


//4
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


//5
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


//7
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
    builder* builders;
    int days_to_build;
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
