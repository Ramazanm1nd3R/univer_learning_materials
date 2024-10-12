#include <iostream>
#include <string>

struct Ship {
    std::string name, arrival_time;
    int stay_time;
    bool status;
};

int main() {
    int a;
    std::cin >> a;
    std::cin.ignore();

    for (int i = 0; i < a; i++) {
        Ship x;
        std::cin >> x.name >> x.arrival_time >> x.stay_time >> x.status;
        int h, m;
        sscanf(x.arrival_time.c_str(), "%d:%d", &h, &m);
        int arrival_total_minutes;
        arrival_total_minutes = h * 60 + m;
        int d = arrival_total_minutes + x.stay_time;
        if (x.status == 1 || (arrival_total_minutes < 600 && d < 600)) {
            std::cout << x.name << std::endl;
        }
    }
}



































#include <iostream>
#include <string>

struct Ship {
    std::string name, arrival_time;
    int stay_time;
    bool status;
};

int main() {
    int a;
    std::cin >> a;
    std::cin.ignore();

    for (int i = 0; i < a; i++) {
        Ship x;
        std::cin >> x.name >> x.arrival_time >> x.stay_time >> x.status;
        int h, m;
        sscanf(x.arrival_time.c_str(), "%d:%d", &h, &m);
        int total_minutes;
        total_minutes = h * 60 + m;
        int d = total_minutes + x.stay_time;
        if (x.status == 1 || (total_minutes < 600 && d < 600)) {
            std::cout << x.name << std::endl;
        }
    }
}
