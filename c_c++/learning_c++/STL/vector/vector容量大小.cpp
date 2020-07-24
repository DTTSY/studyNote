/*
*empty()
*size()
*capacity()
*rsize()
*/
#include <iostream>
#include <vector>

using namespace std;

void printV(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;
    cout << "******************" << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printV(v1);

    if (v1.empty())
    {

        cout << "v1 is empty" << endl;
    }
    else
    {
        cout << "v1 is not empty" << endl;
        cout << "v1's capacity: " << v1.capacity() << endl;
        cout << "v1's size: " << v1.size() << endl;
    }
    //重新设定元素个数
    v1.resize(15, 9);
    printV(v1);

    v1.resize(5);
    printV(v1);

    return 0;
}
