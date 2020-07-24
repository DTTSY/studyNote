#include <iostream>

using namespace std;

class Cube
{
private:
    int m_L;
    int m_W;
    int m_H;

public:
    void setL(int l)
    {
        m_L = l;
    }
    int getL()
    {
        return m_L;
    }
    void setW(int w)
    {
        m_W = w;
    }
    int getw()
    {
        return m_W;
    }
    void setH(int h)
    {
        m_H = h;
    }
    int getH()
    {
        return m_H;
    }
    int surface_area()
    {
        return m_L * m_W * 6;
    }
    int volume()
    {
        return m_H * m_L * m_W;
    }
    bool is_same(Cube &c2)
    {
        if (m_H == c2.getH() && m_L == c2.getL() && m_W == c2.getw())
        {
            return true;
        }
        return false;
    }
};

bool isSame(Cube c1, Cube c2)
{
    if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getw() == c2.getw())
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    Cube c1, c2;
    c1.setH(10);
    c1.setL(10);
    c1.setW(10);

    c2.setH(10);
    c2.setL(10);
    c2.setW(10);
    cout << "立方体面积是：" << c1.surface_area() << endl;
    cout << "立方体体积是：" << c1.volume() << endl;
    bool flage = c1.is_same(c2);
    if (flage)
    {
        cout << "两立方体相等" << endl;
    }
    else
    {
        cout << "两立方体不相等" << endl;
    }

    return 0;
}
