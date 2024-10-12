#include <iostream>
#include <string>

struct student {
    std::string student_name;
    double student_gpa;
    bool grant;
};

struct group {
    std::string group_name;
    int count;
    student* students;
};

int main() {
    int group_num;
    std::cin >> group_num;
    std::cout.precision(2);
    std::cout << std::fixed;
    group* groups = new group[group_num];

    for (int i = 0; i < group_num; i++) {
        std::cin >> groups[i].group_name;
        std::cin >> groups[i].count;
        groups[i].students = new student[groups[i].count];

        for (int j = 0; j < groups[i].count; j++) {
            std::cin >> groups[i].students[j].student_name;
            std::cin >> groups[i].students[j].student_gpa;
            std::cin >> std::boolalpha >> groups[i].students[j].grant;
        }
    }

    for (int i = 0; i < group_num; i++) {
        double avgGPAcalc = 0;
        double tutu = 0;
        
        for (int j = 0; j < groups[i].count; j++) {
            if (groups[i].students[j].grant) {
                avgGPAcalc += groups[i].students[j].student_gpa;
                tutu++;
            }
        }
        
        if (tutu > 0) {
            std::cout << groups[i].group_name << ": Average is " << avgGPAcalc / tutu 
                      << std::endl;
        } else {
            std::cout << groups[i].group_name << ": No students with a grant" << std::endl;
        }
    }
}






