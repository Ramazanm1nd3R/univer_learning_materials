// 1------------------------------------------------------------

#include <iostream>

int main() {
	int m, n;
	std::cin >> m >> n;

	int** arr = new int* [m];
	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> arr[i][j];
		}
	}

	int maxel = arr[0][0];
	int i1 = 0; 
	int j1 = 0;


	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (maxel < arr[i][j]) {
				maxel = arr[i][j];
				i1 = i;
				j1 = j;
			}
		}
	}
	for (int j = 0; j < n; j++) {
		if (j > j1) {
			arr[i1][j] = 0;
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


// 2------------------------------------------------------------
#include <iostream>
#include <string>

struct worker {
	std::string name;
	double salary;
	int hiread_year;
	int worker_hours;
};

int main() {
	int worker_num;
	std::cin >> worker_num;
	double total = 0;
	double tax = 0;
	worker* workers = new worker[worker_num];
	for (int i = 0; i < worker_num; i++) {
		std::cin.ignore();
		std::getline(std::cin, workers[i].name);
		std::cin >> workers[i].salary;
		std::cin >> workers[i].hiread_year;
		std::cin >> workers[i].worker_hours;
	}
	for (int i = 0; i < worker_num; i++) {
		if (workers[i].worker_hours > 40) {
			workers[i].salary * 1.5;
			if (2023 - workers[i].hiread_year > 5) {
				workers[i].salary * 0.1;
			}
		}
		total += workers[i].salary;
		tax += workers[i].salary * 0.1;
		std::cout << workers[i].name << " " << workers[i].salary <<std::endl;
	}
	std::cout << "total = " << total << std::endl << "tax = " << tax;
}

// 3------------------------------------------------------------
#include <iostream>

struct spy{
	std::string name;
	std::string speciality;
	int missions;
	bool is_private;
};

struct agency{
	std::string title;
	int min_missions;
	int agent_count;
	spy* agents;
};

int main() {
	int agency_num;
	std::cin >> agency_num;

	agency* agencies = new agency[agency_num];
	for (int i = 0; i < agency_num; i++) {
		std::cin >> agencies[i].title;
		std::cin >> agencies[i].min_missions;
		std::cin >> agencies[i].agent_count;
		agencies[i].agents = new spy[agencies[i].agent_count];
		for (int j = 0; j < agencies[i].agent_count; j++) {
			std::cin >> agencies[i].agents[j].name;
			std::cin >> agencies[i].agents[j].speciality;
			std::cin >> agencies[i].agents[j].missions;
			std::cin >> agencies[i].agents[j].is_private;
		}
	}

	for (int i = 0; i < agency_num; i++) {
		int counter = 0;
		for (int j = 0; j < agencies[i].agent_count; j++) {
			if (agencies[i].agents[j].speciality == "SpecOps") {
				int min = agencies[i].min_missions - 2;
				if (min > agencies[i].agents[j].missions || agencies[i].agents[j].is_private == 1) {
					counter++;
				}
			}
			else if (agencies[i].agents[j].speciality == "DarkMistery") {
				int min = agencies[i].min_missions * 2;
				if (min > agencies[i].agents[j].missions || agencies[i].agents[j].is_private == 1) {
					counter++;
				}
			}
			else {
				if (agencies[i].min_missions > agencies[i].agents[j].missions || agencies[i].agents[j].is_private == 1) {
					counter++;
				}
			}
		}
		std::cout << agencies[i].title << " " << counter << std::endl;
	}
}
