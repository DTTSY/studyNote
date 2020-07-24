#include <iostream>
using namespace std;

class Point
{
private:
    int m_X;
    int m_Y;

public:
    void setX(int x)
    {
        m_X = x;
    }
    int getX()
    {
        return m_X;
    }
    void setY(int y)
    {
        m_X = y;
    }
    int getY()
    {
        return m_Y;
    }
};

class Circle
{
private:
    int r;
    Point m_center;

public:
};

int main(int argc, char const *argv[])
{

    return 0;
}
