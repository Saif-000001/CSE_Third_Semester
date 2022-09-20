#include <iostream>

class Items
{
    int itemCode[100];
    float itemPrince[100];
    int count;

public:
    void CNT()
    {
        count = 0;
    }

    void getItem();
    void displaySum();
    void remove();
    void displayItems();
};

void Items::getItem()
{
    std::cout << "Enter item code : ";
    std::cin >> itemCode[count];

    std::cout << "Enter item cost : ";
    std::cin >> itemPrince[count];
    count++;
}

void Items::displaySum()
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += itemPrince[i];
        std::cout << "\nTotal value : " << sum << std::endl;
    }
}

void Items::remove()
{
    int a;
    std::cout << "Enter the item code : ";
    std::cin >> a;

    for (int i = 0; i < count; i++)
    {
        if (itemCode[i] == a)
        {
            itemCode[i] = ' ';
        }
    }
}

void Items::displayItems()
{
    std::cout << "\nCode Price : ";
    for (int i = 0; i < count; i++)
    {
        std::cout << "\n"
                  << itemCode[i] << " \t" << itemPrince[i];
    }
    std::cout << "\n\n";
}

int main()
{
    Items order;
    order.CNT();

    int x;
    do
    {
        std::cout << "\n Enter appropriate number : ";
        std::cout << "\n 1 : Add an item ";
        std::cout << "\n 2 : Display total value ";
        std::cout << "\n 3 : Delete an items ";
        std::cout << "\n 4 : Display all items ";
        std::cout << "\n 5 : Quit ";

        std::cout << "\n\n What is your option ? ";
        std::cin >> x;
        switch (x)
        {
        case 1:
            order.getItem();
            break;
        case 2:
            order.displaySum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.displayItems();
            break;
        case 5:
            break;
        default:
            std::cout << "Nothing !";
            break;
        }
    } while (x != 5);
}