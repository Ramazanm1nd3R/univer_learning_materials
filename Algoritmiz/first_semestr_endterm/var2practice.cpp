//1
#include <iostream>
#include <string>

struct plain {
    std::string name;
    std::string model;
    std::string leave_time;
    std::string arrival_time;
    bool is_agent;
};

int main(){
    int plain_num;
    std::cin >> plain_num;
    plain* plains = new plain[plain_num];
    int counter = 0;
    for (int i = 0; i < plain_num; i++){
        std::cin >> plains[i].name;
        std::cin >> plains[i].model;
        std::cin >> plains[i].leave_time;
        std::cin >> plains[i].arrival_time;
        std::cin >> plains[i].is_agent;
    }

    for (int i = 0; i < plain_num; i++){
        int arrival_h, arrival_min;
        sscanf(plains[i].arrival_time.c_str(),"%d:%d", &arrival_h, &arrival_min);
        int leave_h, leave_min;
        sscanf(plains[i].leave_time.c_str(),"%d:%d", &leave_h, &leave_min);

        int duration = (leave_h - arrival_h) * 60 + (leave_min - arrival_min);
        if (plains[i].is_agent == 1 || (plains[i].model != "RUCCKET" && duration <= 120) || (plains[i].model == "TRASH" && duration <= 240)){
            std::cout << plains[i].name << std::endl;
            counter++;
        }
    }
    std::cout << counter;
}


//2
#include <iostream>
#include <string>
#include <cmath>
struct worker {
    std::string name;
    int productivity;
    int salary;
};

struct mechanism{
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

        for (int j = 0; j < mechanisms[i].wcount; j++){
            std::cin >> mechanisms[i].workers[j].name;
            std::cin >> mechanisms[i].workers[j].productivity;
            std::cin >> mechanisms[i].workers[j].salary;
        }
    }

    for (int i = 0; i < mechanism_num; i++){
        int productivitysum = 0;
        int salaryofworkers = 0;
        for (int j = 0; j < mechanisms[i].wcount; j++){
            productivitysum += mechanisms[i].workers[j].productivity;
            salaryofworkers += mechanisms[i].workers[j].salary;
        }   
        int month_work = int(std::ceil(double(mechanisms[i].details) / productivitysum));
        std::cout << mechanisms[i].mechanism_name << " - " << mechanisms[i].cost - (month_work * salaryofworkers) << std::endl; 
    }
}





















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
        // int productivity_cout = 0;
        // int salary_coumt = 0;
        for (int j = 0; j < mechanisms[i].wcount; j++){
            std::cin >> mechanisms[i].workers[j].worker_name;
            std::cin >> mechanisms[i].workers[j].productivity;
            std::cin >> mechanisms[i].workers[j].salary;
            // salary_coumt += mechanisms[i].workers[j].salary;
            // productivity_cout += mechanisms[i].workers[j].productivity;
        }
        // int month_work = int(std::ceil(double(mechanisms[i].details) / productivity_cout));

        
        // std::cout << mechanisms[i].mechanism_name << " - " << mechanisms[i].cost - (month_work * salary_coumt) << std::endl; 
    }
    int totalIncome = 0;
    for (int i = 0; i < mechanism_num; i++){
        int productivity_cout = 0;
        int salary_coumt = 0;
        for (int j = 0; j < mechanisms[i].wcount; j++){
            salary_coumt += mechanisms[i].workers[j].salary;
            productivity_cout += mechanisms[i].workers[j].productivity;
        }
        int month_work = int(std::ceil(double(mechanisms[i].details) / productivity_cout));
        std::cout << mechanisms[i].mechanism_name << " - " << mechanisms[i].cost - (month_work * salary_coumt) << std::endl; 
        totalIncome += mechanisms[i].cost - (month_work * salary_coumt);
    }
    std::cout << "total inc - " << totalIncome;
}






















#include <iostream>
#include <string>

using namespace std;

struct Worker {
    string name;
    int productivity;
    int salary;
};

struct Mechanism {
    string name;
    int details;
    int cost;
    int wCount;
    Worker* workers;
};

int main() {
    int num;
    cin >> num;

    Mechanism* mechs = new Mechanism[num];
    for (int i = 0; i < num; i++) {
        cin >> mechs[i].name >> mechs[i].details >> mechs[i].cost >> mechs[i].wCount;
        mechs[i].workers = new Worker[mechs[i].wCount];
        for (int j = 0; j < mechs[i].wCount; j++) {
            cin >> mechs[i].workers[j].name >> mechs[i].workers[j].productivity >> mechs[i].workers[j].salary;
        }
    }

    int totalIncome = 0;
    for (int i = 0; i < num; i++) {
        int detailsCounter = 0;
        int salaryCounter = 0;
        for (int j = 0; j < mechs[i].wCount; j++) {
            detailsCounter += mechs[i].workers[j].productivity;
            salaryCounter += mechs[i].workers[j].salary;
        }

        // Округляем вниз для положительных чисел
        int monthWorkCount = (mechs[i].details + detailsCounter - 1) / detailsCounter;

        int sumSalaryForAllWorkers = monthWorkCount * salaryCounter;
        int endCostOnBank = mechs[i].cost - sumSalaryForAllWorkers;

        cout << mechs[i].name << " - " << endCostOnBank << endl;
        totalIncome += endCostOnBank;
    }

    cout << "Total income: " << totalIncome;

    delete[] mechs;
    return 0;
}
