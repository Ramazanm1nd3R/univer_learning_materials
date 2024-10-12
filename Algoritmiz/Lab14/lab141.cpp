#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream input("task1.html");
    int h1count = 0, imgcount = 0, acount = 0;
    if (!input.is_open()){
        std::cout << "faila netu";
        return 1;
    }   

    std::string line;
    while (std::getline(input,line)){
        if (line.find("h1") != std::string::npos){
            h1count++;
        }
        if (line.find("img") != std::string::npos){
            imgcount++;
        }
        if (line.find("<a") != std::string::npos){
            acount++;
        }
    }

    input.close();
    std::cout << "<h1>: " << h1count << std::endl;
    std::cout << "<img>: " << imgcount << std::endl;
    std::cout << "<a>: " << acount;
}