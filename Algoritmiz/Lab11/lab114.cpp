
#include <iostream>
int main(){
    std::string a;
    std::cin >> a;
    int sum = 0;
    for (size_t i = 0; i < a.size(); i++){
        if(isdigit(a[i])){
            sum += a[i] - '0';
        }
    }
    std::cout << sum;
}

#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin,str);
    int sum = 0;
    for (char x : str){
        if(isdigit(x)){
            sum += x - '0';
        }
    }
    std::cout << sum;
}
