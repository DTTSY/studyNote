#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1 = "I"; //拼接
    s1 += " like playing game";
    cout << "s1: " << s1 << endl;

    s1 += ':';
    cout << "s1: " << s1 << endl;

    string s2 = "LOL steam.";
    s1 += s2;
    cout << "s1: " << s1 << endl;

    string s3 = "I";
    s3.append(" love english");
    cout << "s3: " << s3 << endl;

    s3.append(" love english", 5);
    cout << "s3: " << s3 << endl;

    s3.append(s2, 3, 6); //（3，n]
    cout << "s3: " << s3 << endl;
    return 0;
}
