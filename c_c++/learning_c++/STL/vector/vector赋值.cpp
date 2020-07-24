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

    //运算符重载，等号赋值。
    vector<int> v2;
    v2 = v1;
    printV(v2);

    //assign赋值
    vector<int> v3;
    v3.assign(v2.begin(), v2.end());
    printV(v3);

    vector<int> v4;
    v4.assign(10, 9);
    printV(v4);

    return 0;
}
