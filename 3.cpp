#include <iostream>
#include <cctype>
#include <string>
#include<sstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;

int main()
{
    string a123;
    stringstream ss;
    // 字符串流清零，将流中的数据全部清除
    ss.str(""); 

    ss<< a123;

    // if (isalpha(a))
    // {
    //     a = toupper(a);
    //     cout << a << " is alpha" << endl;
    // }

    cout << a123 << endl;
    cout << "not alpha " << endl;
    ss.clear();
    return 0;
}
