#include <iostream>
#include <string>

struct train{
    std::string naznach;
    int num;
    std::string arrive_time;
};

int main(){
    int tr_num;
    std::cin >> tr_num;
    train* trains = new train[tr_num];

    for (int i = 0; i < tr_num; i++){
        std::cin >> trains[i].naznach;
        std::cin >> trains[i].num;
        std::cin >> trains[i].arrive_time;
    }

    for (int i = 0; i < tr_num - 1; i++){
        for (int j = 0; j < tr_num - i - 1; j++){
            if (trains[j].naznach > trains[j + 1].naznach){
                std::swap(trains[j].naznach, trains[j + 1].naznach);
            }
        }
    }

    std::string inputtime;
    std::cin >> inputtime;
    int inputtime_h, inputtime_min;
    sscanf(inputtime.c_str(),"%d:%d", &inputtime_h, &inputtime_min);
    bool ii = false;    
    for (int i = 0; i < tr_num; i++){
        int arriv_h, arriv_min;
        sscanf(trains[i].arrive_time.c_str(), "%d:%d", &arriv_h, &arriv_min);
        if (inputtime_h < arriv_h || (inputtime_h == arriv_h && inputtime_min <= arriv_min)){
            std::cout << trains[i].naznach 
            << std::endl 
            << trains[i].num 
            << std::endl
            << trains[i].arrive_time 
            << std::endl;
            ii = true;
        }
    }
    if (!ii){
        std::cout << "net";
    }
}









#include <iostream>
#include <string>

struct train {
    std::string naznach;
    int num;
    std::string arrive_time;
};

int main() {
    int tr_num;
    std::cin >> tr_num;
    train* trains = new train[tr_num];

    for (int i = 0; i < tr_num; i++) {
        std::cin >> trains[i].naznach;
        std::cin >> trains[i].num;
        std::cin >> trains[i].arrive_time;
    }

    for (int i = 0; i < tr_num - 1; i++) {
        for (int j = 0; j < tr_num - i - 1; j++) {
            if (trains[j].naznach > trains[j + 1].naznach) {
                std::swap(trains[j].naznach, trains[j + 1].naznach);
            }
        }
    }

    std::string inputtime;
    std::cin >> inputtime;
    int inputtime_h = 0, inputtime_min = 0;

    // Извлечение часов из строки времени
    inputtime_h = (((int)(inputtime[0] - '0') * 10 + ((int)inputtime[1] - '0')) * 60) +
                   (((int)(inputtime[3] - '0') * 10 + (int)inputtime[4] - '0'));

    bool ii = false;
    for (int i = 0; i < tr_num; i++) {
        int arriv_h = 0, arriv_min = 0;

        // Извлечение часов из строки времени
        arriv_h = (((int)(trains[i].arrive_time[0] - '0') * 10 + ((int)trains[i].arrive_time[1] - '0')) * 60) +
                   (((int)(trains[i].arrive_time[3] - '0') * 10 + (int)trains[i].arrive_time[4] - '0'));

        if (inputtime_h < arriv_h || (inputtime_h == arriv_h && inputtime_min <= arriv_min)) {
            std::cout << trains[i].naznach
                      << std::endl
                      << trains[i].num
                      << std::endl
                      << trains[i].arrive_time
                      << std::endl;
            ii = true;
        }
    }

    if (!ii) {
        std::cout << "net";
    }

    delete[] trains;
    return 0;
}









#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int** arr = new int*[n];

    for (int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            for (int k = 0; k < n - j - 1; k++){
                if (arr[i][k] > arr[i][k + 1]){
                    std::swap(arr[i][k], arr[i][k + 1]);
                }
            }
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}














#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
}







#include <iostream>

int main(){
    std::string name;
    std::getline(std::cin, name);

    size_t space = name.find(' ');
    std::string surname = name.substr(space + 1);

    std::cout << surname;
}