// //1

#include <iostream>

int main(){
    int m, n;
    std::cin >> m >> n;

    int** arr = new int*[m];
    for (int i = 0; i < m; i++){
        arr[i] = new int[n];
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            std::cin >> arr[i][j];
        }
    }

    int minel = arr[0][0];
    int i1;
    int j1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (minel > arr[i][j]){
                minel = arr[i][j];
                i1 = i;
                j1 = j;
            }
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] >= 0 || (i1 == i && j1 == j)){
                std::cout << arr[i][j] << " ";
            }
            else {
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }
}





//2

#include <iostream>

struct Candidate{
    std::string name;
    std::string work;
    int income;
};

int main(){
    int candidate_num;
    std::cin >> candidate_num;
    Candidate* Candidates = new Candidate[candidate_num];

    for (int i = 0; i < candidate_num; i++){
        std::cin.ignore();
        std::getline(std::cin, Candidates[i].name);
        std::cin >> Candidates[i].work;
        std::cin >> Candidates[i].income;
    }

    for (int i = 0; i < candidate_num; i++){
        size_t space = Candidates[i].name.find(' ');
        std::string last_name = Candidates[i].name.substr(space + 1);
        if (Candidates[i].work != "banker" && Candidates[i].income >= 1000 && last_name != "Johnson" && last_name != "Edisson"){
            std::cout << Candidates[i].name << std::endl;
        }
    }
}





//3

#include <iostream>
#include <string>

struct investor{
    std::string name;
    double salay;
    bool invest_free;
};

struct company{
    std::string company_name;
    int cost;
    int investor_count;
    investor* investors;
};

int main(){
    int company_num;
    std::cin >> company_num;
    company* companies = new company[company_num];

    for (int i = 0; i < company_num; i++){
        std::cin >> companies[i].company_name;
        std::cin >> companies[i].cost;
        std::cin >> companies[i].investor_count;
        companies[i].investors = new investor[companies[i].investor_count];

        for (int j = 0; j < companies[i].investor_count; j++){
            std::cin >> companies[i].investors[j].name;
            std::cin >> companies[i].investors[j].salay;
            std::cin >> companies[i].investors[j].invest_free;
        }
    }

    for (int i = 0; i < company_num; i++){
        double cashsum = 0;
        for (int j = 0; j < companies[i].investor_count; j++){
            if (!companies[i].investors[j].invest_free){
                cashsum += (companies[i].investors[j].salay * 0.1) * 3; 
            }
        }
        if (cashsum >= companies[i].cost){
            std::cout << companies[i].company_name << std::endl;
        }
    }
}

















#include <iostream>

int main(){
    int m, n;
    std::cin >> m >> n;

    int** arr = new int*[m];
    for (int i = 0; i < m; i++){
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            std::cin >> arr[i][j];
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}