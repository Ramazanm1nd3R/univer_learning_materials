#include <iostream>
#include <vector>

struct Name
{
  std::string first_name;
  std::string last_name;
};

struct Student
{
  Name full_name;
  int age;
  std::string group;
  double gpa;
};

int main()
{

  Student john;
  john.full_name.first_name = "John";
  john.full_name.last_name = "Smith";
  john.age = 20;
  john.group = "ABC";
  john.gpa = 3.33;

  Student mary = {{"Mary", "Williams"}, 21, "ABD", 3.68};

  std::cout << mary.full_name.last_name << ' ' << mary.full_name.first_name << ' ' << mary.age
            << ' ' << mary.group << ' ' << mary.gpa << std::endl
            << std::endl;

  std::vector<Student> v1;
  v1.push_back(john);
  v1.push_back(mary);
  v1.push_back({{"Kevin", "Smith"}, 23, "ABZ", 3.68});

  srand(time(0));

  std::vector<std::string> vec;
  vec.push_back("James");
  vec.push_back("July");
  vec.push_back("John");

  for (size_t i = 0; i < vec.size(); ++i)
  {
    std::cout << vec[i] << std::endl;
  }
  std::cout << std::endl;
  std::cout << vec.at(1) << std::endl
            << std::endl;

  std::cout << vec.front() << std::endl
            << std::endl;
  std::cout << vec.back() << std::endl
            << std::endl;

  vec.pop_back();
  std::cout << vec.back() << std::endl
            << std::endl;

  std::cout << vec.size() << std::endl
            << std::endl;
  std::cout << vec.capacity() << std::endl
            << std::endl;

  vec.push_back("Sara");
  vec.push_back("Sam");

  std::cout << vec.size() << std::endl
            << std::endl;
  std::cout << vec.capacity() << std::endl
            << std::endl;

  for (size_t i = 0; i < 16; i++)
  {
    vec.push_back("Iris");
  }

  std::cout << vec.size() << ' '
            << vec.capacity() << std::endl
            << std::endl;

  std::cout << vec.empty() << std::endl
            << std::endl;

  std::cout << vec.at(0).size()
            << ' ' << vec.at(0).empty();

  std::cout << std::endl
            << std::endl;
  vec.resize(3);

  std::cout << vec.size() << ' '
            << vec.capacity() << std::endl
            << std::endl;

  std::vector<int> vect(50);

  for (size_t i = 0; i < vect.size(); ++i)
  {
    vect.at(i) = rand() % 10;
  }

  std::vector<int>::iterator it;

  std::cout << vect.size() << ' '
            << vect.capacity() << std::endl
            << std::endl;

  it = vect.begin();

  std::cout << *it << ' ' << vect.front() << std::endl
            << std::endl;

  for (std::vector<int>::iterator iter = vect.begin();
       iter < vect.end(); ++iter)
  {
    std::cout << *iter << ' ';
  }

  std::cout << std::endl
            << std::endl;
  for (size_t i = 0; i < vect.size(); ++i)
  {
    std::cout << vect[i] << ' ';
  }
}
