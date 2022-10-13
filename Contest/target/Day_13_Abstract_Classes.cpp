#include <iostream>

class MyBook
{
    std::string title;
    std::string author;
    int price;

public:
    MyBook(std::string title, std::string author, int price)
    {
        this->title = title;
        this->author = author;
        this->price = price;
    }

    void display()
    {
        std::cout << "Title: " << title << std::endl
                  << "Author: " << author << std::endl
                  << "Price: " << price << std::endl;
    }
};

int main()
{
    std::string title, author;
    int price;

    std::cin >> title >> author >> price;

    MyBook novel(title, author, price);
    novel.display();
}