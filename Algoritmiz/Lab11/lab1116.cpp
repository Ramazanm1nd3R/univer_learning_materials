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




// #include <iostream>
// #include <vector>
// #include <algorithm>

// bool isNotAlpha(char c){
//     return !isalpha(c);
// }

// std::string arrange(std::string sentence){
//     std::vector<std::string> words;
//     std::string word = " ";

//     for (char c : sentence){
//         if (isNotAlpha(c) && !word.empty()){
//             words.push_back(word);
//             word = " ";
//         }
//         else if (!isNotAlpha(c)){
//             word += c;
//         }
//     }

//     if (!word.empty()){
//         words.push_back(word);
//     }

//     sort(words.begin(), words.end(),[](const string &a, const string &b){
//         string lowerA = a;
//         string lowerB = b;
//         transform(lowerA.begin(),lowerA.end(),lowerA.begin(),::tolower);
//         transform(lowerB.begin(),lowerB.end(),lowerB.begin(),::tolower);
//     })
// }