#include <iostream>
#include <string>

struct book {
    std::string book_title;
    std::string author;
    int year;
};

struct library {
    std::string library_name;
    int books_count;
    book* books;
};

int main(){
    int library_num;
    std::cin >> library_num;
    library* libraris = new library[library_num];

    for (int i = 0; i < library_num; i++){
        std::getline(std::cin, libraris[i].library_name),
        (std::cin, libraris[i].books_count);
        libraris[i].books = new book[libraris[i].books_count];

        for (int j = 0; j < libraris[i].books_count; j++){
            std::getline(std::cin,libraris[i].books[j].book_title)
            ,(std::cin, libraris[i].books[j].author)
            ,(std::cin, libraris[i].books[j].year);
        }
    }

    for (int i = 0; i < library_num; i++){
        for (int j = 0; j < libraris[i].books_count; j++){
            std::string enternamae;
            std::cin >> enternamae;
            if (enternamae == libraris[i].books[j].author){
                std::cout << libraris[i].books[j].book_title 
                << " - " << libraris[i].books[j].year 
                << std::endl; 
            }
        }
    }
}