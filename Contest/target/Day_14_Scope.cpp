#include <iostream>
#include <vector>

class Difference
{
    std::vector<int> elements;

public:
    int maximumDifference;
    Difference(std::vector<int> cons)
    {
        elements = cons;
        maximumDifference = 0;
    }

    void computeDifference()
    {
        for (int i = 0; i < elements.size(); i++)
        {
            for (int j = i + 1; j < elements.size(); j++)
            {
                int absoluteValue;
                if (elements[i] < elements[j])
                {
                    absoluteValue = elements[j] - elements[i];
                }
                else
                {
                    absoluteValue = elements[i] - elements[j];
                }

                if (maximumDifference < absoluteValue)
                {
                    maximumDifference = absoluteValue;
                }
            }
        }
    }
};

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> elements;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        elements.push_back(a);
    }
    Difference d(elements);
    d.computeDifference();
    std::cout << d.maximumDifference << std::endl;
}