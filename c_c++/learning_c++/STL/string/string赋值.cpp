#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1;
    s1 = "等号赋值";
    cout << "s1: " << s1 << endl;

    string s2;
    s2 = s1;
    cout << "s2: " << s2 << endl;

    string s3;
    s3 = 'a';
    cout << "s3: " << s3 << endl;

    string s4;
    s4.assign("assign 赋值");
    cout << "s4: " << s4 << endl;

    string s5;
    s5.assign("assign 赋值", 5);
    cout << "s5: " << s5 << endl;

    string s6;
    s6.assign(s5);
    cout << "s6: " << s6 << endl;

    string s7;
    s7.assign(10, 'a');
    cout << "s7: " << s7 << endl;

    return 0;
}
