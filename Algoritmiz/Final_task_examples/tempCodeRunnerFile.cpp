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
