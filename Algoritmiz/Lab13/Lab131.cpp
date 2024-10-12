// #include <iostream>
// #include <string>

// struct Student {
//     std::string name;
//     double gpa;
//     int age;
// };

// struct Group {
//     std::string name;
//     int numMembers;
//     Student* members;
// };

// int main() {
//     int numGroups;

//     std::cout << "Enter the number of groups: ";
//     std::cin >> numGroups;

//     Group* groups = new Group[numGroups];

//     for (int i = 0; i < numGroups; ++i) {
//         std::cout << "\nEnter details for Group " << i + 1 << ":" << std::endl;

//         std::cout << "Enter the group name: ";
//         std::cin >> groups[i].name;

//         std::cout << "Enter the number of students in the group: ";
//         std::cin >> groups[i].numMembers;

//         groups[i].members = new Student[groups[i].numMembers];

//         for (int j = 0; j < groups[i].numMembers; ++j) {
//             std::cout << "\nEnter details for Student " << j + 1 << ":" << std::endl;

//             std::cout << "Enter the student name: ";
//             std::cin >> groups[i].members[j].name;

//             std::cout << "Enter the student GPA: ";
//             std::cin >> groups[i].members[j].gpa;

//             std::cout << "Enter the student age: ";
//             std::cin >> groups[i].members[j].age;
//         }
//     }

//     // Найти участника с максимальным GPA, который старше 18 лет
//     double maxGPA = 0.0;
//     std::string maxGPAStudentName;

//     for (int i = 0; i < numGroups; ++i) {
//         for (int j = 0; j < groups[i].numMembers; ++j) {
//             if (groups[i].members[j].gpa > maxGPA && groups[i].members[j].age >= 18) {
//                 maxGPA = groups[i].members[j].gpa;
//                 maxGPAStudentName = groups[i].members[j].name;
//             }
//         }
//     }

//     if (maxGPA > 0.0) {
//         std::cout << "\nStudent with the highest GPA (>= 18 years old): " << maxGPAStudentName << " with GPA: " << maxGPA << std::endl;
//     } else {
//         std::cout << "\nNo eligible students found." << std::endl;
//     }

//     // Очистка выделенной памяти
//     for (int i = 0; i < numGroups; ++i) {
//         delete[] groups[i].members;
//     }
//     delete[] groups;

//     return 0;
// }









// #include <iostream>
// #include <string>

// struct Student {
//     std::string name;
//     double gpa;
//     int age;
// };

// struct Group {
//     std::string name;
//     int numMembers;
//     Student* members;
// };

// int main() {
//     int numGroups;

//     std::cout << "Enter the number of groups: ";
//     std::cin >> numGroups;

//     Group* groups = new Group[numGroups];

//     for (int i = 0; i < numGroups; ++i) {
//         std::cout << "\nEnter details for Group " << i + 1 << ":" << std::endl;

//         std::cout << "Enter the group name: ";
//         std::cin >> groups[i].name;

//         std::cout << "Enter the number of students in the group: ";
//         std::cin >> groups[i].numMembers;

//         groups[i].members = new Student[groups[i].numMembers];

//         for (int j = 0; j < groups[i].numMembers; ++j) {
//             std::cout << "\nEnter details for Student " << j + 1 << ":" << std::endl;

//             std::cout << "Enter the student name: ";
//             std::cin >> groups[i].members[j].name;

//             std::cout << "Enter the student GPA: ";
//             std::cin >> groups[i].members[j].gpa;

//             std::cout << "Enter the student age: ";
//             std::cin >> groups[i].members[j].age;
//         }
//     }

//     for (int i = 0; i < numGroups; ++i) {
//         double maxGPA = 0.0;
//         std::string maxGPAStudentName;

//         for (int j = 0; j < groups[i].numMembers; ++j) {
//             if (groups[i].members[j].gpa > maxGPA && groups[i].members[j].age >= 18) {
//                 maxGPA = groups[i].members[j].gpa;
//                 maxGPAStudentName = groups[i].members[j].name;
//             }
//         }

//         if (maxGPA > 0.0) {
//             std::cout << "\nMaxGPA of " << groups[i].name << " has " << maxGPAStudentName << std::endl;
//         } else {
//             std::cout << "\nNo eligible students found in " << groups[i].name << std::endl;
//         }
//     }
// }




// #include <iostream>
// #include <string>

// struct Student {
//     std::string name;
//     double gpa;
//     int age;
// };

// struct Group {
//     std::string groupname;
//     int membercount;
//     Student* members;
// };

// int main() {
//     int groupnum;

//     std::cin >> groupnum;

//     Group* groups = new Group[groupnum];

//     for (int i = 0; i < groupnum; ++i) {
//         std::cout << "Enter details for Group " << i + 1 << ":" << std::endl;

//         std::cin >> groups[i].groupname;

//         std::cin >> groups[i].membercount;

//         groups[i].members = new Student[groups[i].membercount];

//         for (int j = 0; j < groups[i].membercount; ++j) {
//             std::cout << "Enter details for Student " << j + 1 << ":" << std::endl;
//             std::cin >> groups[i].members[j].name;

//             std::cin >> groups[i].members[j].gpa;

//             std::cin >> groups[i].members[j].age;
//         }
//     }

//     for (int i = 0; i < groupnum; ++i) {
//         double maxGPA = 0.0;
//         std::string maxGPAStudentName;
//         bool agecheck = false;

//         for (int j = 0; j < groups[i].membercount; j++) {
//             if (groups[i].members[j].gpa > maxGPA && groups[i].members[j].age >= 18) {
//                 maxGPA = groups[i].members[j].gpa;
//                 maxGPAStudentName = groups[i].members[j].name;
//                 agecheck = true;
//             }
//         }

//         if (agecheck) {
//             std::cout << "MaxGPA of " << groups[i].groupname << " has " << maxGPAStudentName << std::endl;
//         } 
//         else {
//             std::cout << "No student with max GPA and age >= 18 in group " << groups[i].groupname;
//         }
//     }
// }








#include <iostream>
#include <string>

struct Student {
    std::string name;
    double gpa;
    int age;
};

struct Group {
    std::string groupname;
    int membercount;
    Student* members;
};

int main() {
    int groupnum;

    std::cin >> groupnum;

    Group* groups = new Group[groupnum];

    for (int i = 0; i < groupnum; ++i) {

        std::cin >> groups[i].groupname;

        std::cin >> groups[i].membercount;

        groups[i].members = new Student[groups[i].membercount];

        for (int j = 0; j < groups[i].membercount; ++j) {
            std::cin >> groups[i].members[j].name;

            std::cin >> groups[i].members[j].gpa;

            std::cin >> groups[i].members[j].age;
        }
    }

    for (int i = 0; i < groupnum; ++i) {
        double maxGPA = 0.0;
        std::string maxGPAStudentName;
        bool agecheck = false;

        for (int j = 0; j < groups[i].membercount; j++) {
            if (groups[i].members[j].gpa > maxGPA && groups[i].members[j].age >= 18) {
                maxGPA = groups[i].members[j].gpa;
                maxGPAStudentName = groups[i].members[j].name;
                agecheck = true;
            }
        }

        if (agecheck) {
            std::cout << "MaxGPA of " << groups[i].groupname << " has " << maxGPAStudentName << std::endl;
        } 
        else {
            std::cout << "No student with max GPA and age >= 18 in group " << groups[i].groupname;
        }
    }
}
