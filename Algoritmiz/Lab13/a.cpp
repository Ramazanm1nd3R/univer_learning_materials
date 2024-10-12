/* 1 
#include <iostream>
#include <string>

using namespace std;

struct Student {
  string name;
  double mark;
  int age;
};

struct Group {
  string name;
  int count;
  Student* students;
};

void printMaxGPAAndAge(Group group) {
  int maxGpaIndex = -1;  // Индекс студента с максимальной оценкой
  double maxGpa = 0.0;

  for (int i = 0; i < group.count; i++) {
    Student student = group.students[i];
    if (student.age >= 18 && student.mark > maxGpa) {
      maxGpaIndex = i;
      maxGpa = student.mark;
    }
  }

  if (maxGpaIndex != -1) {
    cout << "MaxGPA of " << group.name << " has " << group.students[maxGpaIndex].name << endl;
  } else {
    cout << "No student with max GPA and age >= 18 in group " << group.name << endl;
  }
}

int main() {
  int groupCount;
  cin >> groupCount;

  Group* groups = new Group[groupCount];

  for (int i = 0; i < groupCount; i++) {
    Group* group = &groups[i];
    cin >> group->name >> group->count;

    group->students = new Student[group->count];

    for (int j = 0; j < group->count; j++) {
      Student* student = &group->students[j];
      cin >> student->name >> student->mark >> student->age;
    }
  }

  for (int i = 0; i < groupCount; i++) {
    Group group = groups[i];
    printMaxGPAAndAge(group);
  }

  delete[] groups;

  return 0;
}
*/

/*  2
#include <iostream>
#include <string>
#include <climits>

using namespace std;

class Flat {
public:
    string name;
    int price;
    int room;
};

struct City {
    string name;
    int countOfFlat;
    Flat* flat;

    // Function to find the cheapest flat with exactly 3 rooms
    Flat findCheapestFlatWith3Rooms() {
        Flat cheapestFlatWith3Rooms;
        cheapestFlatWith3Rooms.price = INT_MAX;

        for (int i = 0; i < countOfFlat; ++i) {
            if (flat[i].room == 3 && flat[i].price < cheapestFlatWith3Rooms.price) {
                cheapestFlatWith3Rooms = flat[i];
            }
        }

        return cheapestFlatWith3Rooms;
    }
};

int main() {
    int cityCount;
    cin >> cityCount;

    City* cities = new City[cityCount];

    // Input data for each city
    for (int i = 0; i < cityCount; ++i) {
        City* city = &cities[i];
        cin >> city->name >> city->countOfFlat;

        city->flat = new Flat[city->countOfFlat];

        for (int j = 0; j < city->countOfFlat; ++j) {
            Flat* flat = &city->flat[j];
            cin >> flat->name >> flat->price >> flat->room;
        }
    }

    // Output data and find the cheapest flat with exactly 3 rooms for each city
    for (int i = 0; i < cityCount; ++i) {
        City city = cities[i];
        cout << city.name << endl;

        Flat cheapestFlat = city.findCheapestFlatWith3Rooms();

        if (cheapestFlat.price != INT_MAX) {
            cout << "Cheapest flat with exactly 3 rooms is " << cheapestFlat.name << endl;
        } else {
            cout << "No flat with exactly 3 rooms found" << endl;
        }

        cout << endl;
    }

    // Clean up memory
    for (int i = 0; i < cityCount; ++i) {
        delete[] cities[i].flat;
    }
    delete[] cities;

    return 0;
}
*/


/* 3
#include <iostream>
#include <string>

using namespace std;

struct Investor {
  string name;
  int salary;
  bool invest_free;
};

struct Company {
  string company_name;
  int cost;
  int investors_number;
  Investor* investors;
};

int calculateTotalInvestment(Company company) {
  int totalInvestment = 0;
  for (int i = 0; i < company.investors_number; i++) {
    Investor investor = company.investors[i];
    if (!investor.invest_free) {
      totalInvestment += investor.salary * 0.1;
    }
  }
  return totalInvestment;
}

bool canCompanyBeBuilt(Company company) {
  int totalInvestment = calculateTotalInvestment(company);
  return totalInvestment * 3 >= company.cost;
}

int main() {
  int companyCount;
  cin >> companyCount;

  Company* companies = new Company[companyCount];

  for (int i = 0; i < companyCount; i++) {
    Company* company = &companies[i];
    cin >> company->company_name >> company->cost >> company->investors_number;

    company->investors = new Investor[company->investors_number];

    for (int j = 0; j < company->investors_number; j++) {
      Investor* investor = &company->investors[j];
      cin >> investor->name >> investor->salary >> investor->invest_free;
    }
  }

  for (int i = 0; i < companyCount; i++) {
    Company company = companies[i];
    if (canCompanyBeBuilt(company)) {
      cout << company.company_name << endl;
    }
  }

  delete[] companies;

  return 0;
}
*/

/* 4
#include <iostream>
#include <vector>

struct Participant {
  std::string name;
  int produce_food;
  int eat_food;
};

struct Camp {
  std::string title;
  int food_amount;
  int participants_amount;
  Participant* participants;
};

bool can_survive(Camp camp, int days) {
  int daily_consumption = 0;
  for (int i = 0; i < camp.participants_amount; i++) {
    daily_consumption += camp.participants[i].eat_food - camp.participants[i].produce_food;
  }
  return (camp.food_amount + daily_consumption * days) >= 0;
}

int main() {
  int n;
  std::cin >> n;

  std::vector<Camp> camps(n);
  for (int i = 0; i < n; i++) {
    std::cin >> camps[i].title >> camps[i].food_amount >> camps[i].participants_amount;
    camps[i].participants = new Participant[camps[i].participants_amount];
    for (int j = 0; j < camps[i].participants_amount; j++) {
      std::cin >> camps[i].participants[j].name >> camps[i].participants[j].produce_food >> camps[i].participants[j].eat_food;
    }
  }

  std::vector<std::string> surviving_camps;
  for (Camp camp : camps) {
    if (can_survive(camp, 12)) {
      surviving_camps.push_back(camp.title);
    }
  }

  for (std::string camp : surviving_camps) {
    std::cout << camp << std::endl;
  }

  return 0;
}

*/

/* 5
#include <iostream>
#include <vector>
#include <sstream>
#include <numeric>

struct Drug {
    std::string name;
    int price;
    std::string out_of_date;
};

struct Pharmacy {
    std::string name;
    int count_of_drugs;
    std::vector<Drug> drugs;
};

struct City {
    std::string name;
    int count_of_pharmacy;
    std::vector<Pharmacy> pharmacies;
};

double calculate_average(const Pharmacy& pharmacy) {
    double total_price = 0.0;
    for (const auto& drug : pharmacy.drugs) {
        total_price += drug.price;
    }
    return total_price / pharmacy.drugs.size();
}

int main() {
    int num_cities;
    std::cin >> num_cities;

    std::vector<City> cities;

    for (int i = 0; i < num_cities; ++i) {
        City city;
        std::cin >> city.name >> city.count_of_pharmacy;

        for (int j = 0; j < city.count_of_pharmacy; ++j) {
            Pharmacy pharmacy;
            std::cin >> pharmacy.name >> pharmacy.count_of_drugs;

            for (int k = 0; k < pharmacy.count_of_drugs; ++k) {
                Drug drug;
                std::cin >> drug.name >> drug.price >> drug.out_of_date;
                pharmacy.drugs.push_back(drug);
            }

            city.pharmacies.push_back(pharmacy);
        }

        cities.push_back(city);
    }

    for (const auto& city : cities) {
        std::cout << "City: " << city.name << std::endl;
        std::vector<double> pharmacy_avg_prices;

        for (const auto& pharmacy : city.pharmacies) {
            double avg_price = calculate_average(pharmacy);
            std::cout << "Average of " << pharmacy.name << " is " << avg_price << std::endl;
            pharmacy_avg_prices.push_back(avg_price);
        }

        double city_avg_price = 0.0;
        if (!pharmacy_avg_prices.empty()) {
            city_avg_price = std::accumulate(pharmacy_avg_prices.begin(), pharmacy_avg_prices.end(), 0.0) / pharmacy_avg_prices.size();
        }

        std::cout << "AVERAGE OF PRICE OF " << city.name << ": " << city_avg_price << std::endl << std::endl;
    }
}
*/


/* 6
#include <iostream>
#include <string>
#include <iomanip> // Include <iomanip> for setting precision of output
#include <vector>

using namespace std;

// Define the Student struct
struct Student {
    string name;
    double mark;
    bool grant; // true if student has a grant and false otherwise
};

// Define the Group struct
struct Group {
    string name;
    int count;
    vector<Student> students; // Use vector instead of a dynamic array
};

// Function to calculate the average mark of students with a grant in a group
double calculateAverageWithGrant(Group group) {
    double sum = 0.0;
    int numStudentsWithGrant = 0;

    for (int i = 0; i < group.count; ++i) {
        // Check if the student has a grant
        if (group.students[i].grant) {
            sum += group.students[i].mark;
            numStudentsWithGrant++;
        }
    }

    // Calculate the average if there are students with a grant
    if (numStudentsWithGrant > 0) {
        return sum / numStudentsWithGrant;
    } else {
        return 0.0; // Return 0 if no students have a grant
    }
}

int main() {
    int numGroups;
    cin >> numGroups;

    // Vector to store all group information
    vector<Group> groups;

    // Process each group and store the information
    for (int i = 0; i < numGroups; ++i) {
        Group group;
        cin >> group.name >> group.count;

        for (int j = 0; j < group.count; ++j) {
            Student student;
            cin >> student.name >> student.mark;

            // Read the grant status as a string and convert it to bool
            string grantStatus;
            cin >> grantStatus;
            student.grant = (grantStatus == "true");

            group.students.push_back(student);
        }

        groups.push_back(group);
    }

    // Process each group and output the average
    for (const auto& group : groups) {
        // Calculate and print the average mark of students with a grant in the group
        double average = calculateAverageWithGrant(group);

        // Set precision for output
        cout << fixed << setprecision(2);

        cout << group.name << ": Average is " << average << endl;
    }

    return 0;
}
*/

/* 7
#include <iostream>
#include <string>
#include <climits>

using namespace std;

// Define the Flat struct
struct Flat {
    string name;
    int price;
    int room;
};

// Define the City struct
struct City {
    string name;
    int countOfFlat;
    Flat* flats; // Pointer to an array of flats
};

// Function to calculate the difference between the most expensive and cheapest flat in a city
int calculatePriceDifference(City city) {
    int minPrice = INT_MAX;
    int maxPrice = INT_MIN;

    for (int i = 0; i < city.countOfFlat; ++i) {
        // Update min and max prices
        minPrice = min(minPrice, city.flats[i].price);
        maxPrice = max(maxPrice, city.flats[i].price);
    }

    return maxPrice - minPrice;
}

int main() {
    int numCities;
    cin >> numCities;

    // Array to store input cities
    City* cities = new City[numCities];

    // Input loop
    for (int i = 0; i < numCities; ++i) {
        City& city = cities[i];
        cin >> city.name >> city.countOfFlat;

        // Dynamically allocate memory for flats in the city
        city.flats = new Flat[city.countOfFlat];

        for (int j = 0; j < city.countOfFlat; ++j) {
            cin >> city.flats[j].name >> city.flats[j].price >> city.flats[j].room;
        }
    }

    // Output loop
    for (int i = 0; i < numCities; ++i) {
        // Calculate the difference between the most expensive and cheapest flat in the city
        int priceDifference = calculatePriceDifference(cities[i]);

        // Print the result
        cout << cities[i].name << " - " << priceDifference << endl;

        // Free memory allocated for flats
        delete[] cities[i].flats;
    }

    // Free memory allocated for cities
    delete[] cities;

    return 0;
}
*/

/* 8
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Builder {
    string name;
    string type;
    int build_speed;
};

struct Tower {
    string title;
    string type;
    int floors;
    int builders_count;
    vector<Builder> builders;
};

int main() {
    int N;
    cin >> N;
    cin.ignore();  // Consume the newline character

    vector<Tower> towers(N);

    for (int i = 0; i < N; ++i) {
        getline(cin, towers[i].title);
        cin >> towers[i].type >> towers[i].floors >> towers[i].builders_count;
        cin.ignore();  // Consume the newline character

        towers[i].builders.resize(towers[i].builders_count);
        for (int j = 0; j < towers[i].builders_count; ++j) {
            cin >> towers[i].builders[j].name >> towers[i].builders[j].type >> towers[i].builders[j].build_speed;
        }
        cin.ignore();  // Consume the newline character
    }

    for (const auto& originalTower : towers) {
        Tower tower = originalTower;  // Make a copy to work with

        int total_days = 0;
        int current_builder_index = 0;

        while (tower.floors > 0) {
            const Builder& current_builder = tower.builders[current_builder_index];
            int floors_built_today = (current_builder.type == tower.type) ? (current_builder.build_speed * 2) : current_builder.build_speed;

            if (floors_built_today > tower.floors) {
                floors_built_today = tower.floors;
            }

            tower.floors -= floors_built_today;
            total_days++;

            current_builder_index = (current_builder_index + 1) % tower.builders_count;
        }

        cout << originalTower.title << " was built by " << total_days << " days" << endl;
    }

    return 0;
}
*/


/* 9
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Lord {
public:
    string name;
    int income;
    bool tax_free;
    bool is_thief;

    Lord(string n, int inc, bool tf, bool thief)
        : name(n), income(inc), tax_free(tf), is_thief(thief) {}
};

class Kingdom {
public:
    string title;
    int coffer;
    double tax;
    int lord_count;
    vector<Lord> lords;

    Kingdom(string t, int c, double tx, int lc)
        : title(t), coffer(c), tax(tx), lord_count(lc) {}
};

bool compareKingdoms(const Kingdom& a, const Kingdom& b) {
    return a.coffer > b.coffer;
}

void readKingdoms(vector<Kingdom>& kingdoms) {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string title;
        int coffer, lord_count;
        double tax;
        cin >> title >> coffer >> tax >> lord_count;

        Kingdom kingdom(title, coffer, tax, lord_count);

        for (int j = 0; j < lord_count; ++j) {
            string name;
            int income, tax_free, is_thief;
            cin.ignore(); // Ignore newline character
            getline(cin, name);
            cin >> income >> tax_free >> is_thief;

            kingdom.lords.emplace_back(name, income, tax_free, is_thief);
        }

        kingdoms.push_back(kingdom);
    }
}

void calculateTreasury(vector<Kingdom>& kingdoms) { 
    for (auto& kingdom : kingdoms) { 
        for (const auto& lord : kingdom.lords) { 
            if (lord.is_thief) { 
                kingdom.coffer -= lord.income; // Subtract the income for thieves 
            } 
            else if (!lord.tax_free) { 
                int tax_amount = static_cast<int>(lord.income * kingdom.tax); 
                kingdom.coffer += tax_amount; // Add tax for non-thieves 
            } 
        } 
    } 
}



void displayResults(const vector<Kingdom>& kingdoms) {
    // Make a copy of the vector before sorting
    vector<Kingdom> kingdomsCopy = kingdoms;

    // Sort the copied vector
    sort(kingdomsCopy.begin(), kingdomsCopy.end(), compareKingdoms);

    // Display the results
    for (const auto& kingdom : kingdomsCopy) {
        cout << kingdom.title << " - " << kingdom.coffer << endl;
    }
}

int main() {
    vector<Kingdom> kingdoms;
    readKingdoms(kingdoms);
    calculateTreasury(kingdoms);
    displayResults(kingdoms);

    return 0;
}

*/