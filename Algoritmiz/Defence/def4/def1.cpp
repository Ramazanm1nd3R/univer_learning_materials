//1
#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str);
    int counter;
    
    for (int i = 0; i < str.length(); i++){
        char c = std::tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o' || c == 'y' || c == 'w'){
            counter++;
        }
    }
    std::cout << counter;
}

//2
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    int counter = 0;
    size_t begin = 0;

    for (size_t i = 0; i <= str.size(); i++) {
        if (i == str.size() || std::isspace(str[i])) {
            if (i > begin + 1 && std::toupper(str[begin]) == std::toupper(str[i - 1])) {
                counter++;
            }
            begin = i + 1;
        }
    }
    std::cout << counter;
}

//3
#include <iostream>
#include <string>
struct Plane {
    std::string id, arrive_time, leave_time;
};
Plane parse_input() {
    Plane plane;
    std::cin >> plane.id >> plane.arrive_time >> plane.leave_time;
    return plane;
}
int time(std::string s1, std::string s2) {
    int h1, m1, h2, m2;
    sscanf(s1.c_str(), "%d:%d", &h1, & m1);
    sscanf(s2.c_str(), "%d:%d", &h2, & m2);
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    return t2 - t1;
}
int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        Plane plane = parse_input();
        if (time(plane.arrive_time, plane.leave_time) > 120) {
            std::cout << plane.id << " " << plane.arrive_time << " " << plane.leave_time << std::endl;
        }
    }
}








