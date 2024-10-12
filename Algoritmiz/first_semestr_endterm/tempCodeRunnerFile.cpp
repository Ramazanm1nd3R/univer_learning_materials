#include <iostream>
#include <string>

using namespace std;

struct Worker{
  string name;
  int productivity;
  int salary;
};

struct Mechanism{
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
  for(int i = 0; i < num; i++){
    cin >> mechs[i].name >> mechs[i].details >> mechs[i].cost >> mechs[i].wCount;
    mechs[i].workers = new Worker[mechs[i].wCount];
    for(int j = 0; j < mechs[i].wCount; j++){
      cin >> mechs[i].workers[j].name >> mechs[i].workers[j].productivity >> mechs[i].workers[j].salary;
    }
  }

  int totalIncome = 0;
  for(int i = 0; i < num; i++){
    int details_counter = 0;
    int salary_coumter = 0;
    for(int j = 0; j < mechs[i].wCount; j++){
        details_counter += mechs[i].workers[j].productivity;
        salary_coumter += mechs[i].workers[j].salary;
    }
    // int(ceil(double(mechs[i].details) / details_counter)) заменен НА
    int month_work_count = (mechs[i].details + details_counter - 1) / details_counter;

    int sum_salary_for_all_workers = month_work_count * salary_coumter;
    
    int end_cost_on_bank = mechs[i].cost - sum_salary_for_all_workers;
    
    cout << mechs[i].name << " - " << end_cost_on_bank << endl;
    totalIncome += end_cost_on_bank;
    }
    cout << "Total income: " << totalIncome;
  
}