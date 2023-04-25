/*
 * @Author: kkke
 * @Date: 2023-04-25 23:03:33
 * @LastEditors: kkke
 * @LastEditTime: 2023-04-25 23:22:18
 * @Description:
 */

#include<iostream>
#include<string>
#include<thread>
#include<vector>
using namespace std;

void HelloWorld(int a)
{
    cout << "Hello World" << a <<endl;
}

void PrintValue(int value)
{
    cout << "Value:" << value << endl;
}

void Foreach (const vector<int>& values, void(*func)(int))
{
    for (int value : values)
        func(value);
}
int main()
{
    //void(*Func)() = HelloWorld;//实际情况
    /*
        typedef void(*HelloWorldFunc)(int);//定义一个函数指针类型
        HelloWorldFunc Func = HelloWorld;
    */
    auto Func = HelloWorld;//实际在使用函数的指针
    Func(1);
    Func(2);
    vector<int> v = {1,2,3,4,5};

    Foreach(v, [](int value)  {cout << "Value:" << value << endl; });//匿名函数[]捕获外部变量


    

    cin.get();
}