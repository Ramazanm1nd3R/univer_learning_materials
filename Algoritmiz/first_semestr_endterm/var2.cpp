//1
#include <iostream>
#include <string>

struct plain {
    std::string number;
    std::string model;
    std::string leave_time;
    std::string arrival_time;
    bool is_agent;
};

int main(){
    int plain_num;
    std::cin >> plain_num;
    plain* plains = new plain[plain_num];
    int count = 0;
    for (int i = 0; i < plain_num; i++){
        std::cin >> plains[i].number;
        std::cin >> plains[i].model;
        std::cin >> plains[i].leave_time;
        std::cin >> plains[i].arrival_time;
        std::cin >> plains[i].is_agent;
    }
    for (int i = 0; i < plain_num; i++){

        int arrival_hour, arrival_minute, leave_hour, leave_minute;
        sscanf(plains[i].arrival_time.c_str(), "%d:%d", &arrival_hour, &arrival_minute);
        sscanf(plains[i].leave_time.c_str(), "%d:%d", &leave_hour, &leave_minute);
        int duration = (leave_hour - arrival_hour) * 60 + (leave_minute - arrival_minute);
        duration *= -1;
        
        if (plains[i].is_agent == 1 || (duration <= 120 && plains[i].model != "RUCCKET" 
        || (plains[i].model == "TRASH" && duration <= 240))){
            std::cout << plains[i].number << std::endl;
            count++;
        }
    }
    std::cout << count;
}

//2
#include <iostream>
#include <string>
#include <cmath>

struct worker {
    std::string worker_name;
    int productivity;
    int salary;
};


struct mechanism {
    std::string mechanism_name;
    int details;
    int cost;
    int wcount;
    worker* workers;  
};

int main(){
    int mechanism_num;
    std::cin >> mechanism_num;
    mechanism* mechanisms = new mechanism[mechanism_num];

    for (int i = 0; i < mechanism_num; i++){
        std::cin >> mechanisms[i].mechanism_name;
        std::cin >> mechanisms[i].details;
        std::cin >> mechanisms[i].cost;
        std::cin >> mechanisms[i].wcount;
        mechanisms[i].workers = new worker[mechanisms[i].wcount];
        int productivity_cout = 0;
        int salary_coumt = 0;
        for (int j = 0; j < mechanisms[i].wcount; j++){
            std::cin >> mechanisms[i].workers[j].worker_name;
            std::cin >> mechanisms[i].workers[j].productivity;
            std::cin >> mechanisms[i].workers[j].salary;
            salary_coumt += mechanisms[i].workers[j].salary;
            productivity_cout += mechanisms[i].workers[j].productivity;
        }
        int month_work = int(std::ceil(double(mechanisms[i].details) / productivity_cout));

        
        std::cout << mechanisms[i].mechanism_name << " - " << mechanisms[i].cost - (month_work * salary_coumt) << std::endl; 
    }
}













