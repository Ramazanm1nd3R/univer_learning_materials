//1
#include <iostream>
#include <string>

struct Plane {
    std::string id, arrival_time, leave_time;
};
Plane parse_input() {
    Plane plane;
    std::cin >> plane.id >> plane.arrival_time >> plane.leave_time;
    return plane;
}

int calculate_flight_time(const std::string& s1, const std::string& s2) {
    int h1, m1, h2, m2;
    sscanf(s1.c_str(), "%d:%d", &h1, &m1);
    sscanf(s2.c_str(), "%d:%d", &h2, &m2);
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    return t2 - t1;
}

int main() {
    int a;
    std::cin >> a;

    for (int i = 0; i < a; i++) {
        Plane plane = parse_input();

        int flight_time = calculate_flight_time(plane.arrival_time, plane.leave_time);

        if (flight_time > 120) {
            std::cout << plane.id << " " << plane.arrival_time << " " << plane.leave_time << std::endl;
        }
    }  
}

//2
#include <iostream>
#include <string>

struct student {
    std::string name;
    int math, english, program;
};

int main() {
    int a;
    std::cin >> a;
    std::cin.ignore();
    std::cout.precision(2);

    for (int i = 0; i < a; i++) {
        student s;
        std::getline(std::cin, s.name);
        std::cin >> s.math >> s.english >> s.program;
        std::cin.ignore();

        float avg = (s.math + s.english + s.program) / 3.0;
        if (avg >= 4) {
            std::cout << s.name << " " << std::fixed << avg << std::endl;
        }
    }
}

//3
#include <iostream>
#include <string>

struct student {
    std::string name;
    double awg, scholarship;
};

int main() {
    int a;
    std::cin >> a;

    for (int i = 0; i < a; i++) {
        student x;
        std::cin >> x.name >> x.awg >> x.scholarship;

        if (x.awg > 4.5) {
            x.scholarship *= 1.3;
        } 
        else if (x.awg < 2) {
            continue;
        } 
        else {
            x.scholarship *= 1.1;
        }
        std::cout << x.name << " will take " << x.scholarship << "(" << x.awg << ")" << std::endl;
    }
}

//4
#include <iostream>
#include <string>

struct Book {
    std::string name, author, type;
    double price;
};

int main() {
    int a;
    std::cin >> a;
    std::cout.precision(2);
    std::cout << std::fixed;

    for (int i = 0; i < a; i++) {
        Book bk;
        std::cin >> bk.name >> bk.author >> bk.price >> bk.type;

        if (bk.type == "Classical") {
            bk.price = bk.price - bk.price * 0.1;
        } 
        else if (bk.type == "Bestseller") {
            bk.price = bk.price + bk.price * 0.2;
        }

        std::cout << bk.name << " " << bk.author << " " << bk.price << std::endl;
    }
}

//5
#include <iostream>
#include <string>

struct Candidate {
    std::string name, work;
    int income;
};

int main() {
    int a;
    std::cin >> a;
    std::cin.ignore();

    for (int i = 0; i < a; i++) {
        Candidate x;
        std::getline(std::cin, x.name);
        std::cin >> x.work >> x.income;
        std::cin.ignore();
        if (x.work != "banker" && x.income >= 1000 && x.name.substr(x.name.find(' ') + 1) != "Johnson" && x.name.substr(x.name.find(' ') + 1) != "Edisson") {
            std::cout << x.name << std::endl;
        }
    }
}

//6
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
        int arrival_total_minutes = h * 60 + m;

        if (x.status == 1 || (arrival_total_minutes < 600 && (arrival_total_minutes + x.stay_time) < 600)) {
            std::cout << x.name << std::endl;
        }
    }
}

//7
#include <iostream>
#include <string>
struct Plane {
    std::string name;
    std::string arrival_time;
    std::string departure_time;
};

int main() {
    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << "No planes available for processing" << std::endl;
        return 0;
    }

    Plane planes[100]; 
    for (int i = 0; i < n; ++i) {
        std::cin >> planes[i].name >> planes[i].arrival_time >> planes[i].departure_time;
    }

    bool window_found = false;
    const int MAX_GAP = 10000;

    if (n == 1) {
        std::cout << planes[0].departure_time << " " << planes[0].name << " free" << std::endl;
        window_found = true;
    } else {
        for (int i = 0; i < n - 1; ++i) {
            int h1, m1, h2, m2;
            sscanf(planes[i].departure_time.c_str(), "%d:%d", &h1, &m1);
            sscanf(planes[i + 1].arrival_time.c_str(), "%d:%d", &h2, &m2);
            int gap = (h2 * 60 + m2) - (h1 * 60 + m1);

            if (gap >= 60 && gap < MAX_GAP) {
                std::cout << planes[i].departure_time << " between " << planes[i].name << " and " << planes[i + 1].name << std::endl;
                window_found = true;
                break;
            }
        }
    }
    if (!window_found) {
        std::cout << "No suitable window found" << std::endl;
    }
}

//8
#include <iostream>
#include <string>

struct Voter {
    std::string name;
    int vote_weight;
    std::string candidate;
    bool is_voted = false;
};

struct Govern {
    std::string name;
    int votes_num = 0;
};

int main() {
    int num_voters;
    std::cin >> num_voters;
    Govern governs[3] = {{"Javos"}, {"Pythos"}, {"Sharpos"}};
    Voter voters[100];

    for (int i = 0; i < num_voters; i++) {
        std::cin >> voters[i].name >> voters[i].vote_weight >> voters[i].candidate;


        for (int j = i - 1; j >= 0; j--) {
            if (voters[i].name == voters[j].name) {
                voters[i].is_voted = true;
                break;
            }
        }

 
        if (!voters[i].is_voted) {
            for (int j = 0; j < 3; ++j) {
                if (voters[i].candidate == governs[j].name) {
                    governs[j].votes_num += voters[i].vote_weight;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (governs[i].votes_num > 0) {
            std::cout << governs[i].name << ": " << governs[i].votes_num << std::endl;
        }
    }

    int maxvot = -1;
    bool tie = false;
    std::string winner;
    for (int i = 0; i < 3; ++i) {
        if (governs[i].votes_num > maxvot) {
            maxvot = governs[i].votes_num;
            winner = governs[i].name;
            tie = false;
        } 
        else if (governs[i].votes_num == maxvot) {
            tie = true;
        }
    }
    if (tie) {
        std::cout << "It's a tie! No winner.";
    } 
    else {
        std::cout << winner << " WIN";
    }
}
