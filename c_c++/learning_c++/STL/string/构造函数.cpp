/*
 * @Author       : DengTao
 * @Date         : 2020-07-24 14:34:05
 * @LastEditors  : DengTao
 * @LastEditTime : 2020-07-24 18:19:15
 * @Description  : 
 * @FilePath     : /studyNote/c_c++/learning_c++/STL/string/构造函数.cpp
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1; //默认构造,创建一个空字符串
    cout << "s1: " << s1 << endl;

    const char *str = "使用字符串str初始化"; //把c_string转化为string
    string s2(str);
    cout << "s2: " << s2 << endl;

    string s3(s2); //调用拷贝构造
    cout << "s3: " << s3 << endl;

    string s4(10, 'a');
    cout << "s4: " << s4 << endl;
    return 0;
}
