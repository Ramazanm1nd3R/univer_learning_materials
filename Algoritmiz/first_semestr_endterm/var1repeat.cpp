
#include <iostream>
#include <string>
int main(){
    std::string name = "14:43";
    std::string name1 = "16:53";
    int name_h, name_min;
    sscanf(name.c_str(),"%d:%d", &name_h, &name_min);
    int name1_h, name1_min;
    sscanf(name1.c_str(),"%d:%d", &name1_h, &name1_min);
    int duration = (name1_h - name_h) * 60 + (name1_min - name_min);
    std::cout << duration;
}

//это не важно
//смотри ниже




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
    int visitor_num;
    std::cin >> visitor_num;
    visitor* visitors = new visitor[visitor_num];

    for (int i = 0; i < visitor_num; i++){
        std::cin >> visitors[i].visitor_name;
        std::cin >> visitors[i].visitor_surname;
        std::cin >> visitors[i].is_employee;
        std::cin >> visitors[i].arrival_time;
        std::cin >> visitors[i].leave_time;
    }

    for (int i = 0; i < visitor_num; i++){
        int arrival_h, arrival_min;
        sscanf(visitors[i].arrival_time.c_str(), "%d:%d", &arrival_h, &arrival_min);
        int leave_h, leave_min;
        sscanf(visitors[i].leave_time.c_str(),"%d:%d", &leave_h, &leave_min);
        int duration = (leave_h - arrival_h) * 60 + (leave_h - arrival_min);
        if (duration < 0){
            duration *= -1;
        }
        if (visitors[i].visitor_surname == "Smith"){
            continue;
        }
            if ((visitors[i].is_employee == 1 && duration < 120) || (visitors[i].is_employee == 0 && duration > 180)){
                std::cout << visitors[i].visitor_name << " " << visitors[i].visitor_surname << std::endl;
            }
    }
}

//2
#include <iostream>
#include <string>
#include <cmath>

struct miner {
    std::string name;
    int foodspend;
    int productivity;
};

struct mine {
    std::string title;
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
        std::cin >> mines[i].title;
        std::cin >> mines[i].food;
        std::cin >> mines[i].cost;
        std::cin >> mines[i].mcount;
        mines[i].miners = new miner[mines[i].mcount];

        for (int j = 0; j < mines[i].mcount; j++){
            std::cin >> mines[i].miners[j].name;
            std::cin >> mines[i].miners[j].foodspend;
            std::cin >> mines[i].miners[j].productivity;
        }
    }
    int totalsum = 0;
    for (int i = 0; i < mine_num; i++){
        int minerfoodspendsum = 0;
        int minerproductsum = 0;
        for (int j = 0; j < mines[i].mcount; j++){
            minerfoodspendsum += mines[i].miners[j].foodspend;
            minerproductsum += mines[i].miners[j].productivity;
        }
        int dayspend = int(std::ceil(double(mines[i].food) / minerfoodspendsum));
        int totalproduct = dayspend * minerproductsum;
        int totalcashsum = totalproduct * mines[i].cost;
        std::cout << mines[i].title << " - " << totalcashsum << std::endl;
        totalsum += totalcashsum;
    }
    std::cout << "total - " << totalsum;
}

