/*
 * @Author: kkke
 * @Date: 2023-04-24 17:19:58
 * @LastEditors: kkke
 * @LastEditTime: 2023-04-25 13:42:03
 */
#include<iostream>
#include<string>

int main()
{
    const int MaxAge = 90;
    const int* a = new int;//常量指针，指向的地址可变
    int* const b = new int;//指针常量，指向的地址不可变
    *b = 2;
    std::cout << *b << std::endl;
    a = (int*)&MaxAge;
    std::cout << *a << std::endl;

    return 0;
}