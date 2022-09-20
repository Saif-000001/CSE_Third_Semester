#include <iostream>

class Sample
{
    int a;
    int b;

public:
    void setData()
    {
        a = 25;
        b = 40;
    }
    friend float mean(Sample s);
};

float mean(Sample s)
{
    return float(s.a + s.b) / 2;
}

int main()
{
    Sample x;
    x.setData();
    std::cout << "Mean value = " << mean(x) << std::endl;
    return 0;
}