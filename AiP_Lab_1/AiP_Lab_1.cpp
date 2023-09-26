#include <iostream>

bool BelongsCircle(float x, float y, float radius)
{
    return x * x + y * y <= pow(radius, 2);
}

void Task1(float x, float y, float radius, float a)
{
    if (BelongsCircle(x, y, radius) && x >= a)
    {
        std::cout << "Ok" << std::endl;;
    }
    else
    {
        std::cout << "Missing" << std::endl;
    }
}

int Task2(int a, int b, int c)
{
    std::cout << a + b + c << std::endl;
    if ((a + b + c) % 2 == 0)
    {
        return a + b + c;
    }
    else
    {
        return a * b * c;
    }
}

int main()
{
    float x = 0, y = 0, radius = 0, aPoint = 0;
    std::cout << "Task 1:\nEnter x = ";
    std::cin >> x;
    std::cout << "Enter y = ";
    std::cin >> y;
    std::cout << "Enter radius = ";
    std::cin >> radius;
    std::cout << "Enter a = ";
    std::cin >> aPoint;
    Task1(x, y, radius, aPoint);
    int a = 0, b = 0, c = 0;
    std::cout << "Task 2:\nEnter a = ";
    std::cin >> a;
    std::cout << "Enter b = ";
    std::cin >> b;
    std::cout << "Enter c = ";
    std::cin >> c;
    std::cout << Task2(a, b, c);
}
