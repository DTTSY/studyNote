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
    //默认构造
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printV(v1);

    //区间构造  [m,n)
    vector<int> v2(v1.begin(), v1.end());
    printV(v2);

    //n个element方式构造
    vector<int> v3(10, 9); //10个9
    printV(v3);

    // **拷贝构造**
    vector<int> v4(v3);
    printV(v4);
    return 0;
}
