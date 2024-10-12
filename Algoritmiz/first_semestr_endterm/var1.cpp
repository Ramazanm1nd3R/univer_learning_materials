//1
#include <iostream>
#include <string>

struct visitor {
    std::string visitor_name;
    std::string visitor_surname;
    bool is_employee;
    std::string arrival_time;
    std::string leave_time;
};

int main(){
    int visitors_num;
    std::cin >> visitors_num;
    int count = 0   ;
    visitor* visitors = new visitor[visitors_num];
    for (int i = 0; i < visitors_num; i++){
        std::cin >> visitors[i].visitor_name;
        std::cin >> visitors[i].visitor_surname;
        std::cin >> visitors[i].is_employee;
        std::cin >> visitors[i].arrival_time;
        std::cin >> visitors[i].leave_time;
    }
    for (int i = 0; i < visitors_num; i++){
        if (visitors[i].visitor_surname == "Smith"){
            continue;
        }

        int arrival_hour, arrival_minute;
        int leave_hour, leave_minute;
        scanf(visitors[i].arrival_time.c_str(), "%d:%d", &arrival_hour, &arrival_minute);
        scanf(visitors[i].leave_time.c_str(), "%d:%d", &leave_hour, &leave_minute);
        int duration = (leave_hour - arrival_hour) * 60 + (leave_minute - arrival_minute);
        
        if ((!visitors[i].is_employee && duration > 60) ||
            (visitors[i].is_employee && duration < 120) ||
            (visitors[i].leave_time < visitors[i].arrival_time)) {
            count++;    
        }
    }
    std::cout << count << std::endl;
    for (int i = 0; i < visitors_num; i++){
        if (visitors[i].visitor_surname == "Smith"){
            continue;
        }

        int arrival_hour, arrival_minute;
        int leave_hour, leave_minute;
        scanf(visitors[i].arrival_time.c_str(), "%d:%d", &arrival_hour, &arrival_minute);
        scanf(visitors[i].leave_time.c_str(), "%d:%d", &leave_hour, &leave_minute);
        int duration = (leave_hour - arrival_hour) * 60 + (leave_minute - arrival_minute);
        if ((visitors[i].is_employee && duration == 0 > 60) ||
            (visitors[i].is_employee && duration == 1 < 120) ||
            (visitors[i].leave_time < visitors[i].arrival_time)) {
            std::cout << visitors[i].visitor_name << " " << visitors[i].visitor_surname << std::endl;
        }
        
    }
}

//2
#include <iostream>
#include <string>

struct miner {
    std::string miner_name;
    int foodspend;
    int productivity;
};

struct mine {
    std::string mine_name;
    int food;
    int cost;
    int mcount;
    miner* miners;
};

int main(){
    int mine_num;
    std::cin >> mine_num;
    mine* mines = new mine[mine_num];
    for (int i = 0; i < mine_num; i++){
        std::cin >> mines[i].mine_name;
        std::cin >> mines[i].food; //food count
        std::cin >> mines[i].cost; //almaz price
        std::cin >> mines[i].mcount;
        mines[i].miners = new miner[mines[i].mcount];

        for (int j = 0; j < mines[i].mcount; j++){
            std::cin >> mines[i].miners[j].miner_name;
            std::cin >> mines[i].miners[j].foodspend; //food eat
            std::cin >> mines[i].miners[j].productivity; //almaz+
        }
    }
    for (int i = 0; i < mine_num; i++){
        for (int j = 0; j < mines[i].mcount; j++){
            
        }
    }
}


