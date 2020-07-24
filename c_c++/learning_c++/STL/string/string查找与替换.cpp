#include <iostream>
#include <string>

using namespace std;

//查找
void test01()
{
    string s1 = "i love you!";
    int pos = s1.find("o");
    cout << "pos: " << pos << endl;
    pos = s1.rfind("o");
    cout << "rfind pos: " << pos << endl;
}

void test02()
{
    string s = "apple";
    s.replace(0, 5, "55555");
    cout << s << endl;
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}
