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