//2
#include <iostream>
#include <string>
using namespace std;

struct Flat {
	string name;
	int price, room;
};

struct City {
	string cname;
	int count;
	Flat* flat;
};

int main() {
	int n;
	cin >> n;
	for (int j = 0; j < n; j++) {
		City c;
		cin >> c.cname >> c.count;
		c.flat = new Flat[c.count];
		int minp = 999999999;
		int k = 0, mk = 0;
		for (int i = 0; i < c.count; i++) {
			cin >> c.flat[i].name >> c.flat[i].price >> c.flat[i].room;
			if (c.flat[i].room == 3) {
				k++;
				if ((c.flat[i].price) < minp) {
					minp = c.flat[i].price;
					mk = i;
				}
			}
		}
		cout << c.cname << endl;
		if (k != 0) {
			cout << "Cheapest flat with exactly 3 rooms is " << c.flat[mk].name << endl;
		}
		else {
			cout << "No flat with exactly 3 rooms found" << endl;
		}
		cout << endl;
	}
}