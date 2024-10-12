// 1
#include <iostream>
int main(){
    char a;
    std::cin >> a;
    std::cout << char(a - 1) << " " << char(a + 1);
}

// 2
#include <iostream>
#include <string>
int main(){
    std::string str;
    int counter = 0;
    std::getline(std::cin, str);
    for (int i : str){
        if (isdigit(i)){
            counter++;
        }
    }
    std::cout << counter;
}

// 3
#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str);
    for (size_t i = 0; i < str.size();i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = toupper(str[i]);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = tolower(str[i]);
        }
    }
    std::cout << str;
}

// 4
#include <iostream>
#include <string>
int main(){
    std::string str;
    int sum = 0;
    std::getline(std::cin, str);
    for (int i : str){
        if (isdigit(i)){
            sum += i - '0';
        }
    }
    std::cout << sum;
}

// 5
#include <iostream>
#include <string>
int main(){
    std::string S, S0, result;
    char C;
    std::cin >> C >> S >> S0;
    for (int i : S){
        if (C == i){
            result += S0;
        }
        result += i;
    }
    std::cout << result;
}

// 6
#include <iostream>
#include <string>
int main(){
    std::string S, S0;
    std::cin >> S >> S0;
    size_t del = S.find(S0);
    if (del != std::string::npos){
        S.erase(del, S0.length());
    }
    std::cout << S;
}

// 7
#include <iostream>
#include <string>
int main(){
    std::string str, str1, str2;
    std::getline(std::cin, str);
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);
    size_t swap = str.find(str1);
    while (swap != std::string::npos)
    {
        str.replace(swap,str1.length(),str2);
        swap = str.find(str1);
    }
    std::cout << str;
}

// 8
#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str);
    int counter = 0; bool word = false;
    for (char i : str){
        if (isalpha(i)){
            word = true;
        }
        else {
            if (word){
                counter++;
                word = false;
            }
        }
    }
    if (word){
        counter++;
    }
    std::cout << counter;
}

// 9 
#include <iostream>
int main() {
    std::string a; 
    getline(std::cin, a);
    int count = 0, lenth = 0; bool x = false;
    a += ' ';
    for (size_t i = 0; i < a.size(); i++) {
        char current = a[i];
        if ((current >= 0 && current <= 47) || (current >= 58 && current <= 64)) {
            if (x) {
                x = false;
            }
        }
        else {
            x = true;
        }
        if (x == 1) {
            lenth++;
        }
        else if (x == 0) {
            if (((int)tolower(a[i - 1]) == (int)tolower(a[i - lenth])) && (lenth > 1)) {
                count++;
            }
            lenth = 0;
        }
    }
    std::cout << count;
}

// 10
#include <iostream>
int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string current;
    int count = 0;
    bool containsA = false;
    for (char c : input) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '\'')) {
            current += c;
            if (c == 'a' || c == 'A') {
                containsA = true;
            }
        } 
        else {
            if (!current.empty() && containsA && current != "a" && current != "A") {
                count++;
            }
            current.clear();
            containsA = false;
        }
    }
    if (!current.empty() && containsA && current != "a" && current != "A") {
        count++;
    }
    std::cout << count;
}

// 11
#include <iostream>
#include <string>

int main() {
    std::string a;
    std::getline(std::cin, a);

    std::string longword;
    size_t max = 0;

    std::string current;
    for (size_t i = 0; i < a.length(); i++) {
        char count = a[i];
        if (std::isalpha(count)) {
            current += count;
        } 
        else {
            if (current.length() > max) {
                max = current.length();
                longword = current;
            }
            current.clear();
        }
    }

    if (current.length() > max) {
        longword = current;
        max = current.length();
    }
    if (max != 0) {
        std::cout << longword << std::endl << max;
    } 
    else {
        std::cout << max;
    }
}

// 12
#include <iostream>
int main() {
    std::string input;
    std::getline(std::cin, input);
    int count = 0;
    for (char c : input) {
        if (ispunct(c)) {
            count++;
        }
    }
    std::cout << count;
}

// 13
#include <iostream>

int main() {
    std::string s;
    getline(std::cin, s);

    int decimal = 0;
    bool error = false;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '1') {
            int digit = s[i] - '0';
            decimal = decimal * 2 + digit;
        } else {
            error = true;
            break;
        }
    }

    if (error) {
        std::cout << "error";
    } else {
        std::cout << decimal;
    }
}

// 14
#include <iostream>
#include <string>

int main() {
    std::string fullFilename;
    std::getline(std::cin, fullFilename);
    size_t lastSlash = fullFilename.find_last_of("/\\");
    size_t lastDot = fullFilename.find_last_of('.');
    
    if (lastSlash != std::string::npos && lastDot != std::string::npos) {
        if (lastDot > lastSlash) {
            std::string filename = fullFilename.substr(lastSlash + 1, lastDot - lastSlash - 1); // Извлечение имени файла без расширения
            std::cout << filename;
        } 
        else {
            std::cout << "error";
        }
    } 
    else {
        std::cout << "error";
    }
}

// 15
#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str);
    int a;
    std::cin >> a;
    std::string enc = "";
    for (char i : str){
        if (isupper(i)){
            char upper = 'A' + (i + a - 'A');
            enc += upper;
        }
        else if (islower(i)){
            char lower = 'a' + (i + a - 'a');
            enc += lower;
        }
        else {
            enc += i;
        }
    }
    std::cout << enc;
}

// 16
#include <iostream>

int words(std::string& s, std::string arr[]) {
    int count = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if ((int(s[i]) >= 65 && int(s[i]) <= 90) || 
        (int(s[i]) >= 97 && int(s[i]) <= 122)) {
            while ((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122)) {
                arr[count] += s[i];
                i++;
            }
            i--;
            count++;
        }
    }
    return count;
}
void sort(std::string arr[], int c) {
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < c - 1; ++j) {
            if (arr[j][0] > arr[j + 1][0]) {
                std::string x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }
}
void mixsort(std::string arr[], int c) {
    for (int i = 0; i < c; ++i) {
        if ((int(arr[i][0]) >= 65) && (int(arr[i][0]) <= 90)) 
        { continue; }
        else if ((int(arr[i][0]) >= 97) && (int(arr[i][0]) <= 122)) {
            for (int j = i; j > 0; j--) {
                if ((int(arr[j - 1][0]) >= 97) && (int(arr[j - 1][0]) <= 122)) 
                { break; }
                else if ((arr[j][0] - char(32)) < arr[j - 1][0]) {
                    std::string x = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = x;
                }
                else break;
            }
        }
    }
}
int main() {
    std::string s{}; getline(std::cin, s); std::string arr[100];
    int numwords = words(s, arr);
    sort(arr, numwords);
    mixsort(arr, numwords);
    for (size_t i = 0; i < numwords; i++) {
        std::cout << arr[i] << ' ';
    }
}

// 17
#include <iostream>
int main() {
    std::string a;
    std::getline(std::cin, a);
    int x = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') {
            x++;
        } 
        else if (a[i] == ')') {
            x--;
            if (x < 0) {
                std::cout << i + 1;
                return 0;
            }
        }
    }
    if (x == 0) {
        std::cout << "0";
    } 
    else {
        std::cout << "-1";
    }
}


